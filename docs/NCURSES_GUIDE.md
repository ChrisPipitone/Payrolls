# Ncurses TUI Guide for Payrolls

This guide outlines the conceptual approach for replacing the original Windows Forms GUI with a professional Terminal User Interface (TUI) using the `ncurses` library.

## 1. The Ncurses Lifecycle
Ncurses takes exclusive control of the terminal. To ensure the terminal is restored correctly after the program exits, you must follow a strict lifecycle:

- **Initialization:** Hand over control to ncurses. This disables standard terminal behaviors (like line buffering) and sets up the internal memory structures.
- **Active Phase:** The "Main Loop" where the UI is rendered and user input is processed.
- **Cleanup:** Explicitly "end" the session before the program terminates. Failure to do this will leave the user's terminal in a broken state (missing cursor, garbled text).

## 2. Window Management
Instead of a flat stream of text, ncurses uses a "Window" model similar to GUI frameworks:

- **`stdscr`:** The root window covering the entire terminal area.
- **Sub-windows:** Rectangular areas used to partition the screen. For the Payrolls app, you might have:
    - A **Header Window** for the title and current user.
    - A **Menu Window** for navigation (Add Employee, View Paystub, etc.).
    - A **Content Window** for displaying database records or forms.
- **Borders & Boxing:** Ncurses can automatically draw borders around windows, providing visual structure without manual character placement.

## 3. The Virtual Screen (Refresh Cycle)
Ncurses is highly efficient because it uses "double buffering":

1. **Memory Buffer:** You "print" text and draw borders to virtual windows in memory.
2. **Comparison:** When you trigger a "refresh," ncurses compares your virtual buffer to what is currently visible on the physical screen.
3. **Optimized Update:** It sends only the specific characters that changed, preventing the "flickering" common in basic command-line apps.

## 4. Input Handling
In a TUI, you move away from `std::cin` and toward character-based input:

- **Raw Key Capturing:** Capture arrow keys, function keys (F1-F12), and Escape immediately.
- **No Echo:** Prevent the terminal from automatically printing every key the user types (essential for password fields or menu navigation).
- **Non-blocking Input:** You can set "timeouts" so the UI stays responsive (e.g., updating a clock) even if the user isn't typing.

## 5. Architectural Integration
To maintain a clean C++17 codebase during the refactor:

- **Separation of Concerns:** Keep your ncurses code in a dedicated "View" layer. Your "Logic" (Tax calculation, Database access) should remain agnostic of the UI.
- **CMake Integration:** Update the build system to find and link the `curses` or `ncurses` library.
- **Directory Structure:** Place UI-related headers in `include/payrolls/ui/` and implementations in `src/ui/`.

## 6. Key Concepts to Explore
- **Attributes:** Applying Bold, Underline, or Reverse-Video to highlight selected menu items.
- **Color Pairs:** Defining foreground/background combinations (e.g., Green text on Black for success messages).
- **Coordinate System:** Ncurses uses `(y, x)` coordinates, where `(0, 0)` is the top-left corner.
