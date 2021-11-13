#include "Benfits.h"
#include <cmath>
#include <string>
using namespace System;

double Benfits::CalculateHealthCoverage(double salary, String^ package)
{
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else //Silver_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
}

double Benfits::CalculateDentalCoverage(double salary, String^ package)
{
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else //Silver_pack
    {
        return round((salary * 0.045) * 100.0) / 100.0;
    }
}

double Benfits::CalculateVisionCoverage(double salary, String^ package)
{
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else //Silver_pack
    {
        return round((salary * 0.042) * 100.0) / 100.0;
    }

}

double Benfits::CalculateHealthBenfits(double salary)
{

    return 0.0;
}


