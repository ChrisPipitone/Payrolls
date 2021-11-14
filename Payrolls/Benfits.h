#pragma once

using namespace System;

ref class Benfits {
public:
    double CalculateHealthCoverage(double salary, String^ package);
    double CalculateDentalCoverage(double salary, String^ package);
    double CalculateVisionCoverage(double salary, String^ package);
    double CalculateHealthBenfits(double salary);

private:
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    String^ silver = "Silver Package";
};
