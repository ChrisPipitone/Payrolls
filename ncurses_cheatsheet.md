# ncurses Cheatsheet

Relevant for: terminal UI — menus, forms, data tables, login screens.

Link against `-lncurses` (or `-lncursesw` for wide-char/Unicode).

```cmake
find_package(Curses REQUIRED)
target_link_libraries(payrolls PRIVATE ${CURSES_LIBRARIES})
target_include_directories(payrolls PRIVATE ${CURSES_INCLUDE_DIR})
```

---

## Core Concepts

- **stdscr** — default full-screen window, always exists after `initscr()`
- **WINDOW*** — handle for any window (panel, subwindow, etc.)
- **Coordinate system** — `(y, x)`, top-left is `(0, 0)`. Y first, always.
- **Virtual screen** — ncurses batches changes; `refresh()` flushes to terminal.
- `mv*` functions — move cursor then act (e.g., `mvprintw(y, x, ...)`)
- `w*` functions — act on a specific WINDOW (e.g., `wprintw(win, ...)`)
- `mvw*` functions — move on specific WINDOW (e.g., `mvwprintw(win, y, x, ...)`)

---

## Lifecycle

```cpp
#include <ncurses.h>

int main() {
    initscr();            // init ncurses, must be first
    cbreak();             // input char-by-char, no Enter needed
    noecho();             // don't echo typed chars to screen
    keypad(stdscr, TRUE); // enable arrow keys, F-keys, etc.
    curs_set(0);          // 0=invisible, 1=normal, 2=very visible

    // --- your TUI here ---

    endwin();             // restore terminal — always call before exit
    return 0;
}
```

Always call `endwin()` — even on error paths. Failure leaves terminal broken.

```cpp
// Safe pattern for exceptions:
struct NCursesGuard {
    NCursesGuard() { initscr(); cbreak(); noecho(); keypad(stdscr, TRUE); }
    ~NCursesGuard() { endwin(); }
};
```

---

## Screen Dimensions

```cpp
int rows, cols;
getmaxyx(stdscr, rows, cols);   // always query — don't hardcode

// Requery on terminal resize:
// SIGWINCH signal fires on resize; call endwin()+refresh() or use KEY_RESIZE
```

---

## Output

```cpp
// stdscr
printw("Hello %s", name);               // like printf
mvprintw(5, 10, "Row 5, Col 10");       // move then print
addstr("raw string");
addch('X');                             // single char
mvaddch(y, x, 'X');

// specific window
wprintw(win, "text");
mvwprintw(win, y, x, "text");
waddstr(win, "text");

refresh();       // flush stdscr to terminal
wrefresh(win);   // flush specific window
```

---

## Input

```cpp
int ch = getch();         // read one keypress (blocks by default)
int ch = wgetch(win);     // from specific window

// Non-blocking input
nodelay(stdscr, TRUE);    // getch returns ERR immediately if no input
int ch = getch();
if (ch == ERR) { /* no input */ }
nodelay(stdscr, FALSE);   // restore blocking

// Timeout (milliseconds)
timeout(100);             // getch waits up to 100ms, then returns ERR

// Read a string (avoid — no bounds check in older impls)
char buf[64];
getnstr(buf, sizeof(buf) - 1);       // safer than getstr
mvgetnstr(y, x, buf, sizeof(buf)-1);
```

### Key constants (requires `keypad(win, TRUE)`)

```cpp
KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT
KEY_ENTER   // numpad Enter (regular Enter = '\n' or '\r')
KEY_BACKSPACE
KEY_DC      // Delete key
KEY_HOME, KEY_END
KEY_PPAGE, KEY_NPAGE    // Page Up / Page Down
KEY_F(1) .. KEY_F(12)
KEY_RESIZE  // terminal was resized
```

---

## Windows

```cpp
// newwin(height, width, start_y, start_x)
WINDOW* win = newwin(10, 40, 5, 20);
box(win, 0, 0);          // draw border using default chars
wrefresh(win);

delwin(win);             // free window — do before endwin()

// Subwindow (shares parent's buffer)
WINDOW* sub = subwin(stdscr, h, w, y, x);

// Derived window (independent buffer, relative coords)
WINDOW* der = derwin(win, h, w, rel_y, rel_x);
```

### Clear / Erase

```cpp
clear();        // erase stdscr + move to (0,0)
erase();        // erase stdscr, don't move cursor
wclear(win);
werase(win);
clrtoeol();     // clear from cursor to end of line
wclrtoeol(win);
clrtobot();     // clear from cursor to bottom of screen
```

---

## Colors

```cpp
// Must call after initscr()
if (has_colors()) {
    start_color();
    // init_pair(pair_id, foreground, background)
    // pair_id: 1..COLOR_PAIRS-1
    init_pair(1, COLOR_WHITE,  COLOR_BLUE);   // header
    init_pair(2, COLOR_BLACK,  COLOR_WHITE);  // selected row
    init_pair(3, COLOR_RED,    COLOR_BLACK);  // error
    init_pair(4, COLOR_GREEN,  COLOR_BLACK);  // success
    init_pair(5, COLOR_YELLOW, COLOR_BLACK);  // warning
}

// Apply color pair
attron(COLOR_PAIR(1));
printw("Header text");
attroff(COLOR_PAIR(1));

// On a window
wattron(win, COLOR_PAIR(2));
wprintw(win, "selected");
wattroff(win, COLOR_PAIR(2));
```

### Built-in colors
`COLOR_BLACK`, `COLOR_RED`, `COLOR_GREEN`, `COLOR_YELLOW`,
`COLOR_BLUE`, `COLOR_MAGENTA`, `COLOR_CYAN`, `COLOR_WHITE`

### Custom colors (if terminal supports it)
```cpp
// init_color(color_id, r, g, b)  — values 0–1000
init_color(COLOR_RED, 1000, 200, 200); // custom red
```

---

## Attributes

```cpp
attron(A_BOLD);
attron(A_UNDERLINE);
attron(A_REVERSE);    // swap fg/bg — useful for selection highlight
attron(A_DIM);
attron(A_BLINK);

// combine
attron(A_BOLD | COLOR_PAIR(1));

attroff(A_BOLD);
attrset(A_NORMAL);    // clear all attributes
```

---

## Borders & Lines

```cpp
box(win, 0, 0);                      // default border chars
wborder(win, '|','|','-','-','+','+','+','+'); // custom: l,r,t,b,tl,tr,bl,br

// Draw lines
whline(win, '-', width);             // horizontal line
wvline(win, '|', height);            // vertical line
mvwhline(win, y, x, ACS_HLINE, w);  // ACS = alternate char set (box-drawing)
mvwvline(win, y, x, ACS_VLINE, h);

// ACS box-drawing chars
ACS_ULCORNER  ACS_URCORNER   // ┌ ┐
ACS_LLCORNER  ACS_LRCORNER   // └ ┘
ACS_HLINE     ACS_VLINE      // ─ │
ACS_LTEE      ACS_RTEE       // ├ ┤
ACS_TTEE      ACS_BTEE       // ┬ ┴
ACS_PLUS                     // ┼
```

---

## Panels

Panels solve z-ordering — layered windows without manual redraw.

```cpp
#include <panel.h>
// link: -lpanel

WINDOW* win = newwin(h, w, y, x);
PANEL*  pan = new_panel(win);

show_panel(pan);
hide_panel(pan);
top_panel(pan);       // bring to front
bottom_panel(pan);
move_panel(pan, y, x);

update_panels();      // recompute z-order
doupdate();           // flush to terminal (replaces wrefresh when using panels)

del_panel(pan);
delwin(win);
```

---

## Menus (using `menu.h`)

```cpp
#include <menu.h>
// link: -lmenu

const char* choices[] = { "Login", "View Payroll", "Admin", "Quit", nullptr };
int n = 4;

ITEM** items = new ITEM*[n + 1];
for (int i = 0; i < n; ++i)
    items[i] = new_item(choices[i], "");  // (name, description)
items[n] = nullptr;  // null-terminate

MENU* menu = new_menu(items);

WINDOW* win = newwin(10, 30, 4, 14);
keypad(win, TRUE);
set_menu_win(menu, win);

WINDOW* sub = derwin(win, 6, 28, 2, 1);
set_menu_sub(menu, sub);
set_menu_format(menu, 6, 1);  // rows, cols visible

box(win, 0, 0);
post_menu(menu);
wrefresh(win);

int ch;
while ((ch = wgetch(win)) != 'q') {
    switch (ch) {
        case KEY_DOWN: menu_driver(menu, REQ_DOWN_ITEM);  break;
        case KEY_UP:   menu_driver(menu, REQ_UP_ITEM);    break;
        case '\n':
            // current item
            ITEM* cur = current_item(menu);
            // item_name(cur), item_index(cur)
            break;
    }
    wrefresh(win);
}

unpost_menu(menu);
free_menu(menu);
for (int i = 0; i < n; ++i) free_item(items[i]);
delete[] items;
delwin(sub);
delwin(win);
```

### `menu_driver` requests
```
REQ_UP_ITEM    REQ_DOWN_ITEM
REQ_NEXT_ITEM  REQ_PREV_ITEM
REQ_FIRST_ITEM REQ_LAST_ITEM
REQ_SCR_UPAGE  REQ_SCR_DPAGE   // scroll page
REQ_TOGGLE_ITEM                 // multi-select
```

---

## Forms (using `form.h`)

Good for login screens and employee data entry.

```cpp
#include <form.h>
// link: -lform

// Create fields: FIELD*(height, width, top_y, left_x, offscreen_rows, nbuffers)
FIELD* fields[3];
fields[0] = new_field(1, 20, 2, 12, 0, 0);  // username
fields[1] = new_field(1, 20, 4, 12, 0, 0);  // password
fields[2] = nullptr;

// Field options
set_field_back(fields[0], A_UNDERLINE);
field_opts_off(fields[1], O_PUBLIC);          // password field — chars hidden
set_field_type(fields[0], TYPE_ALNUM, 0);    // alphanumeric only

FORM*   form = new_form(fields);
WINDOW* win  = newwin(10, 50, 5, 10);
WINDOW* sub  = derwin(win, 8, 48, 1, 1);
keypad(win, TRUE);

set_form_win(form, win);
set_form_sub(form, sub);
post_form(form);

// Labels (just printw before posting, or use separate window)
mvwprintw(win, 2, 2, "Username:");
mvwprintw(win, 4, 2, "Password:");
wrefresh(win);

int ch;
while ((ch = wgetch(win)) != KEY_F(1)) {
    switch (ch) {
        case KEY_DOWN: case '\t': form_driver(form, REQ_NEXT_FIELD); break;
        case KEY_UP:              form_driver(form, REQ_PREV_FIELD); break;
        case KEY_BACKSPACE: case 127:
            form_driver(form, REQ_DEL_PREV); break;
        case '\n':
            form_driver(form, REQ_NEXT_FIELD);  // commit field buffer
            // read: field_buffer(fields[0], 0)
            break;
        default:
            form_driver(form, ch);  // pass printable char to form
            break;
    }
    wrefresh(win);
}

// Read field values
form_driver(form, REQ_VALIDATION);  // flush current field to buffer
std::string username = field_buffer(fields[0], 0);
// Note: field_buffer pads with spaces to field width — trim before use

unpost_form(form);
free_form(form);
free_field(fields[0]);
free_field(fields[1]);
delwin(sub);
delwin(win);
```

### `form_driver` requests
```
REQ_NEXT_FIELD  REQ_PREV_FIELD
REQ_NEXT_CHAR   REQ_PREV_CHAR
REQ_DEL_CHAR    REQ_DEL_PREV   // Delete / Backspace
REQ_CLR_FIELD                  // clear entire field
REQ_VALIDATION                 // validate and commit current field
REQ_BEG_FIELD   REQ_END_FIELD  // Home / End within field
```

---

## Scrollable Lists (manual — no library)

Useful for HR employee tables / paystub history.

```cpp
struct ScrollList {
    WINDOW*                  win;
    std::vector<std::string> items;
    int                      offset   = 0;  // first visible row
    int                      selected = 0;
    int                      visible;        // rows that fit

    ScrollList(WINDOW* w, std::vector<std::string> data)
        : win(w), items(std::move(data)) {
        int h, dummy;
        getmaxyx(win, h, dummy);
        visible = h - 2;  // minus border
    }

    void draw() {
        werase(win);
        box(win, 0, 0);
        for (int i = 0; i < visible && (offset + i) < (int)items.size(); ++i) {
            int idx = offset + i;
            if (idx == selected) wattron(win, A_REVERSE);
            mvwprintw(win, i + 1, 1, "%-*s", getmaxx(win) - 2, items[idx].c_str());
            if (idx == selected) wattroff(win, A_REVERSE);
        }
        wrefresh(win);
    }

    void move_up() {
        if (selected > 0) {
            --selected;
            if (selected < offset) --offset;
        }
    }

    void move_down() {
        if (selected < (int)items.size() - 1) {
            ++selected;
            if (selected >= offset + visible) ++offset;
        }
    }
};
```

---

## Common Patterns

### Centered window
```cpp
WINDOW* centered_win(int h, int w) {
    int rows, cols;
    getmaxyx(stdscr, rows, cols);
    return newwin(h, w, (rows - h) / 2, (cols - w) / 2);
}
```

### Message / modal dialog
```cpp
void show_message(const std::string& msg) {
    int w = msg.size() + 4;
    WINDOW* win = centered_win(5, w);
    box(win, 0, 0);
    mvwprintw(win, 2, 2, "%s", msg.c_str());
    mvwprintw(win, 3, 2, "Press any key...");
    wrefresh(win);
    wgetch(win);
    delwin(win);
    touchwin(stdscr);   // mark stdscr dirty so it redraws over dialog
    refresh();
}
```

### Status bar (bottom row)
```cpp
void status_bar(const std::string& msg) {
    int rows, cols;
    getmaxyx(stdscr, rows, cols);
    attron(A_REVERSE);
    mvprintw(rows - 1, 0, "%-*s", cols, msg.c_str());
    attroff(A_REVERSE);
    refresh();
}
```

### Input field with echo (temporary)
```cpp
std::string read_input(WINDOW* win, int y, int x, int maxlen) {
    echo();
    curs_set(1);
    char buf[256] = {};
    mvwgetnstr(win, y, x, buf, std::min(maxlen, 255));
    noecho();
    curs_set(0);
    return buf;
}
```

### Terminal resize handling
```cpp
while (true) {
    int ch = getch();
    if (ch == KEY_RESIZE) {
        endwin();
        refresh();          // re-sync terminal size
        clear();
        getmaxyx(stdscr, rows, cols);
        // rebuild windows for new size
        continue;
    }
    // handle other input
}
```

---

## Common Mistakes

### 1. Y before X — always
```cpp
mvprintw(y, x, "text");   // correct
mvprintw(x, y, "text");   // wrong — easy to flip, hard to spot
```

### 2. Forgetting `endwin()` on exit paths
Leaves terminal in raw mode — no echo, broken input. Use RAII guard.

### 3. `refresh()` vs `wrefresh()` vs `doupdate()`
- `refresh()` = `wnoutrefresh(stdscr)` + `doupdate()`
- `wrefresh(win)` = `wnoutrefresh(win)` + `doupdate()`
- For multiple windows: call `wnoutrefresh()` on each, then one `doupdate()` — avoids flicker

```cpp
wnoutrefresh(win1);
wnoutrefresh(win2);
doupdate();   // one terminal write
```

### 4. `field_buffer` returns space-padded string
```cpp
std::string raw = field_buffer(fields[0], 0);
// trim trailing spaces
raw.erase(raw.find_last_not_of(' ') + 1);
```

### 5. `keypad()` per window
`keypad(stdscr, TRUE)` only enables arrow keys on stdscr. Call on every window you read from.
```cpp
keypad(win, TRUE);  // don't forget this for each WINDOW*
```

### 6. `getch()` on wrong window
Reading from stdscr but display is in a subwindow — cursor position mismatch, input goes to wrong place. Always `wgetch(win)` from the window receiving input.

### 7. Drawing over border
After `box(win, 0, 0)`, don't write at column 0 or last col, row 0 or last row — overwrites border chars.
```cpp
mvwprintw(win, 1, 1, "text");  // start at (1,1) inside border
```

### 8. Freeing in wrong order
```cpp
// correct order:
unpost_menu(menu);
free_menu(menu);
for (auto item : items) free_item(item);
delwin(sub);
delwin(win);
// then endwin()
```

### 9. `cbreak()` vs `raw()`
- `cbreak()` — char-by-char, Ctrl+C/Z still work (preferred)
- `raw()` — char-by-char, Ctrl+C/Z pass through as raw bytes (avoid unless you need it)

---

## Installation

### macOS

macOS ships ncurses but it's old (5.x). Install Homebrew's 6.x:

```bash
brew install ncurses
```

Installs to `/opt/homebrew/opt/ncurses` (Apple Silicon) or `/usr/local/opt/ncurses` (Intel).

Verify:
```bash
/opt/homebrew/opt/ncurses/bin/ncurses6-config --version
```

### Arch Linux

```bash
sudo pacman -S ncurses
```

Includes headers and all sub-libraries (menu, form, panel) — nothing extra needed.

### Ubuntu / Debian

```bash
sudo apt install libncurses-dev
# for menu/form/panel:
sudo apt install libmenu-dev libform-dev libpanel-dev
# or grab everything at once:
sudo apt install libncurses5-dev libncursesw5-dev
```

Verify:
```bash
dpkg -l | grep ncurses
```

### Fedora / RHEL

```bash
sudo dnf install ncurses-devel
```

---

## Build & Link (CMake)

macOS requires hinting CMake away from the stale system ncurses toward Homebrew:

```cmake
# Homebrew ncurses takes precedence over macOS system ncurses (too old)
if(APPLE)
    list(APPEND CMAKE_PREFIX_PATH "/opt/homebrew/opt/ncurses")
endif()
set(CURSES_NEED_NCURSES TRUE)
find_package(Curses REQUIRED)

# menu/form/panel not found by FindCurses — locate separately
find_library(MENU_LIB  menu  HINTS /opt/homebrew/opt/ncurses/lib)
find_library(FORM_LIB  form  HINTS /opt/homebrew/opt/ncurses/lib)
find_library(PANEL_LIB panel HINTS /opt/homebrew/opt/ncurses/lib)

target_include_directories(payrolls PRIVATE ${CURSES_INCLUDE_DIRS})
target_link_libraries(payrolls PRIVATE
    ${CURSES_LIBRARIES}
    ${MENU_LIB}
    ${FORM_LIB}
    ${PANEL_LIB}
)
```

On Linux, `find_library` will find menu/form/panel from the system path automatically — the `HINTS` are macOS-only paths and are ignored on Linux.

Configure and build:
```bash
cmake -B build
cmake --build build
```

Verify ncurses was picked up (not the system one):
```bash
cmake -B build 2>&1 | grep -i curses
# Should show: -- Found Curses: /opt/homebrew/opt/ncurses/lib/libncurses.dylib
```

---

## Quick Reference

| Task | Function |
|------|----------|
| Init | `initscr()` |
| Cleanup | `endwin()` |
| Print at position | `mvprintw(y, x, fmt, ...)` |
| Print in window | `mvwprintw(win, y, x, fmt, ...)` |
| Read key | `getch()` / `wgetch(win)` |
| Flush screen | `refresh()` / `wrefresh(win)` |
| New window | `newwin(h, w, y, x)` |
| Free window | `delwin(win)` |
| Border | `box(win, 0, 0)` |
| Color on | `attron(COLOR_PAIR(n))` |
| Bold on | `attron(A_BOLD)` |
| Attr off | `attroff(A_BOLD \| COLOR_PAIR(n))` |
| Screen size | `getmaxyx(stdscr, rows, cols)` |
| Cursor pos | `getyx(win, y, x)` |
| Move cursor | `wmove(win, y, x)` |
| Clear window | `werase(win)` |
| Enable arrow keys | `keypad(win, TRUE)` |
| Hide cursor | `curs_set(0)` |
