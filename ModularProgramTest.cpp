//In this class, we learnt how to create functions to have Modular programming, 
//where programs are divided by functions.
#include <stdio.h>

double calc_gross(int h, double r);    //function prototype (function heading)


void main()                         //driver module
{
	int hours;
	double rate, gross_pay;
	printf_s("Enter rate of pay \n");
	scanf_s("%lf", &rate);
	printf_s("Enter hours worked \n");
	scanf_s("%d", &hours);

	gross_pay = calc_gross(hours, rate);
	printf_s("Gross Pay = %8.2f \n", gross_pay);
}

double calc_gross(int h, double r)    //Defining your function AND Second Module
{
	double reg_pay, ovt_pay;         //Regular and Overtime pay
	double pay;                        //Final gross pay.

	if (h <= 40)
		pay = h * r;
	else
	{
		reg_pay = 40 * r;
		ovt_pay = (h - 40) * 1.5 * r;           //Time and a half.
		pay = reg_pay + ovt_pay;
	}
	return pay;                                //So Pay can be used in other modules/functions
}
