/*
Auhtor Yawar Hussain
*/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    if(argc != 6)
    {
        printf("ERROR........!\n");
        printf("Please Enter 6 argument with your exe file \nWith respect to given instruction:\n");
        printf("exe-file initial-Balance  monthly-Contribution Annual-Rate-Return Annual-Inflation-Rate Number-of-year\n");
        exit(0);
    }

    double initialBalance = atof(argv[1]);
    double monthlyContribution = atof(argv[2]);
    double annualRateOfReturn = atof(argv[3]);
    double annualInflationRate = atof(argv[4]);
    int Number_of_years = atoi(argv[5]);

    double Total_intrest = 0, intrest = 0, inflated_Intrest = 0;
    double balance = initialBalance;

    double monthlyRateOfReturn = pow(1 + annualRateOfReturn, 1.0 / 12) - 1;
    double monthlyInflationRate = pow(1 + annualInflationRate, 1.0 / 12) - 1;

    printf("Month \t Intrest  \t Balance\n");
    for (int i = 1; i <= Number_of_years * 12; i++)
    {
        intrest = balance * monthlyRateOfReturn;
        inflated_Intrest = intrest / (1 + monthlyInflationRate);

        balance = balance + inflated_Intrest + monthlyContribution;

        Total_intrest = Total_intrest + inflated_Intrest;

        printf("%5d $%10.2f $%10.2f\n", i, inflated_Intrest, balance);
    }

    printf("Total Interest is : $%.2f\n", Total_intrest);
    printf("Total Balance is : $%.2f\n", balance);

    return 0;
}