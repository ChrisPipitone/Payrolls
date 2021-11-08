#include "Benfits.h"
#include <cmath>
#include <string>
using namespace std;

double Benfits::CalculateHealthCoverage(int salary,int netpay, double employee_price, double employer_price)
{
    if (salary > 100000) // Platinum_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000 || salary < 100000) //Gold_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000) //Silver_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else
        return 0.0;
}

double Benfits::CalculateDentalCoverage(int salary, int netpay, double employee_price, double employer_price)
{
    if (salary > 100000) // Platinum_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000 || salary < 100000) //Gold_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000) //Silver_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else
        return 0.0;
}

double Benfits::CalculateVisionCoverage(int salary, int netpay, double employee_price, double employer_price)
{
    if (salary > 100000) // Platinum_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000 || salary < 100000) //Gold_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
    else if (salary > 70000) //Silver_pack
    {
        employee_price = salary * 0.80;
        employer_price = salary * 0.20;
        netpay = salary - employee_price;
        return netpay;
    }
else 
return 0.0;
}

double Benfits::CalculateHealthBenfits(int salary, int netpay, double employee_price, double employer_price)
{

    return 0.0;
}


