#include <string>
#ifndef Benfits_H
#define Benfits_H

class Benfits{
public:
    double CalculateHealthCoverage(double salary, double netpay, double employee_price, double employer_price);
    double CalculateDentalCoverage(double salary, double netpay, double employee_price, double employer_price);
    double CalculateVisionCoverage(double salary, double netpay, double employee_price, double employer_price);
    double CalculateHealthBenfits(double salary, double netpay, double employee_price, double employer_price);


};

#endif#pragma once
