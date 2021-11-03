#include "NYTax.h"
#include<cmath>

double NYTax::NYTaxRate(double grossIncome) {
    if (grossIncome <= 8500) {
        return round((grossIncome * 0.04) * 100.0) / 100.0;
    }
    else if (grossIncome >= 8501 && grossIncome <= 11700) {
        return round((340 + grossIncome * 0.045) * 100.0) / 100.0;
    }
    else if (grossIncome >= 11701 && grossIncome <= 13900) {
        return round((484 + grossIncome * 0.0525) * 100.0) / 100.0;
    }
    else if (grossIncome >= 13901 && grossIncome <= 21400) {
        return round((600 + grossIncome * 0.059) * 100.0) / 100.0;
    }
    else if (grossIncome >= 21401 && grossIncome <= 80650) {
        return round((1042 + grossIncome * 0.0597) * 100.0) / 100.0;
    }
    else if (grossIncome >= 80651 && grossIncome <= 215400) {
        return round((4579 + grossIncome * 0.0633) * 100.0) / 100.0;
    }
    else if (grossIncome >= 215401 && grossIncome <= 1077550) {
        return round((13109 + grossIncome * 0.0685) * 100.0) / 100.0;
    }
    else if (grossIncome >= 1077551 && grossIncome <= 5000000) {
        return round((72166 + grossIncome * 0.0965) * 100.0) / 100.0;
    }
    else if (grossIncome >= 5000001 && grossIncome <= 25000000) {
        return round((450683 + grossIncome * 0.103) * 100.0) / 100.0;
    }
    else {
        return round((2510683 + grossIncome * 0.109) * 100.0) / 100.0;
    }
}