//Name: Meigan Wright
//ID: 96871
//Midterm Examination Question #1
#include <stdio.h>
#include <math.h>


void determineSlopeMid(double x1, double x2, double y1, double y2, double* midx, double* midy, double* slope);

 int main()
{
	double x1, y1, x2, y2;
	double midx, midy;
	double slope;

	printf_s("Call your co-ordinate points A and B respectively. \n");
	printf_s("Please enter the first point A. That is, X1 then Y1. \n");
	scanf_s("%lf\t%lf", &x1, &y1);
	printf_s("Please enter the second point B. That is, X2 then Y2. \n");
	scanf_s("%lf\t%lf", &x2, &y2);

	determineSlopeMid(x1, x2, y1, y2, &midx, &midy, &slope);

	printf_s("The slope, given the points, is :\n");
	printf_s("%.8lf \n", slope);
	printf_s("The midpoint, given the points, is: \n");
	printf_s("%.8lf\t%.8lf \n", midx, midy);
}

 void determineSlopeMid(double x1, double x2, double y1, double y2, double* midx, double* midy, double* slope)
 {
	 *slope = (y2 -y1) / (x2 - x1);
	 *midx = (x1 + x2) / 2.0;
	 *midy = (y1 + y2) /2.0;
 }