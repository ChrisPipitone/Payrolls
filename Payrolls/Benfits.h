#ifndef Benfits_H
#define Benfits_H
using namespace System;


class Benfits{
public:
    double CalculateHealthCoverage(double salary, String^ package);
    double CalculateDentalCoverage(double salary, String^ package);
    double CalculateVisionCoverage(double salary, String^ package);
    double CalculateHealthBenfits(double salary); 


};

#endif
