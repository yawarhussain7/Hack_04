/*
Auhtor Yawar Hussain
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    if(argv != 6)
    {
       
    }

    double initialBalance = atof(argv[1]);
    double monthlyContribution = atof(argv[2]);
    double annualRateOfReturn = atof(argv[3]);
    double annualInflationRate = atof(argv[4]);
    int Number_of_years = atoi(argv[5]);

    double monthlyRateOfReturn = pow(1 + annualRateOfReturn, 1.0 / 12) - 1;
    double monthlyInflationRate = pow(1 + annualInflationRate, 1.0 / 12) - 1;



    return 0;
}