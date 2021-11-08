#include <string>
#ifndef Benfits_H
#define Benfits_H

class Benfits{
public:
    double CalculateHealthCoverage(int salary, int netpay, double employee_price, double employer_price);
    double CalculateDentalCoverage(int salary, int netpay, double employee_price, double employer_price);
    double CalculateVisionCoverage(int salary, int netpay, double employee_price, double employer_price);
    double CalculateHealthBenfits(int salary, int netpay, double employee_price, double employer_price); 


};

#endif#pragma once
