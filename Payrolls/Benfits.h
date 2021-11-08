#pragma once
#include <iostream>
using namespace std;

ref class Benefits
{
public: //data members
    double CalculateHealthCoverage(int salary, double employee_price, double employer_price);
    double CaclculateDentalCoverage(int salary, double employee_price, double employer_price);
    double CalculateVisionCoverage(int salary, double employee_price, double employer_price);
    double CalculateLifeInsurancee(int salary, double employee_price, double employer_price);
    double CalculateDisabilityCoverage(int salary, double employee_price, double employer_price);

private:
    int platinum_pack = 1;
    int Gold_pack = 2;
    int Silver_pack = 3;
};

