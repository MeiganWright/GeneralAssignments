//Name: Meigan Wright
//Assignment 1 Question 2
//This program takes store data over a 6 month period in tabular format
//And displays the Monthly average and total in new columns and 1 row.

#include <stdio.h>
#include <math.h>
#define rows 4
#define columns 6

void main(void)
{
	double sales[rows][columns];
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			sales[i][j] = 0;
		}
	}
	for (i = 0; i < rows - 1; i++)
	{
		for (j = 0; j < columns - 1; j++)
		{
			scanf_s("%lf", &sales[i][j]);
		}
	}
	for (i = 0; i < rows - 1; i++)
	{
		for (j = 0; j < columns - 1; j++)
			sales[i][columns - 1] = sales[i][columns - 1] + sales[i][j];

		sales[i][columns - 1] = sales[i][columns - 1] / [columns - 1];

	}

	for (j = 0; j < columns - 1; j++)
	{
		for (i = 0; i < rows - 1; i++)
			sales[rows - 1][j] = sales[rows - 1][j] + sales[i][j];

		sales[rows - 1][j] = sales[rows - 1][j] / (rows - 1);
	}
	printf_s("\t\t\t Item Type \t\t\t January \t\t\t February \t\t\t March \t\t\t April \t\t\tMay\t\t\tJune\t\t\tTotal\t\t\tAverage \n");
	for (i = 0; i <= rows - 2; i++)
	{
		printf_s("Item Type %d\t", i);
		for (j = 0; j <= columns - 1; j++)
		{
			printf_s("%.lf\t", sales[i][j]);
		}
		printf_s("\n");
	}
}