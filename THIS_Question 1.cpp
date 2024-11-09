//Name: Meigan Wright
//Assignment 1 Question 1
//This code accepts a 2 x 3 and a 3 x 2 matrix, multiplies the two entities and 
//Outputs the result.

#include <stdio.h>
#include <math.h>

void matrix_multiplier(int Ar1c1, int Ar1c2, int Ar1c3, int Ar2c1, int Ar2c2, int Ar2c3, int Br1c1, int Br1c2, int Br2c1, int Br2c2, int Br3c1, int Br3c2, int* Cr1c1, int* Cr1c2, int* Cr2c1, int* Cr2c2);


int main()
{
	int Ar1c1, Ar1c2, Ar1c3;
	int Ar2c1, Ar2c2, Ar2c3;

	int Br1c1, Br1c2;
	int Br2c1, Br2c2;
	int Br3c1, Br3c2;

	int Cr1c1, Cr1c2;
	int Cr2c1, Cr2c2;

	printf_s("Please enter your first matrix, your 2x3 matrix, in the following format: Row 1-Column 1, Row 1-Column 2, Row1-Column 3 etc \n");
	scanf_s("%d\t%d\t%d", &Ar1c1, &Ar1c2, &Ar1c3);
	scanf_s("%d\t%d\t%d", &Ar2c1, &Ar2c2, &Ar2c3);

	printf_s("Please enter your second matrix, your 3x2 matrix, in the following format: Row 1-Column 1, Row 1-Column 2, Row2-Column 1 etc \n");
	scanf_s("%d\t%d", &Br1c1, &Br1c2);
	scanf_s("%d\t%d", &Br2c1, &Br2c2);
	scanf_s("%d\t%d", &Br3c1, &Br3c2);

	matrix_multiplier(Ar1c1, Ar1c2, Ar1c3, Ar2c1, Ar2c2, Ar2c3, Br1c1, Br1c2, Br2c1, Br2c2, Br3c1, Br3c2, &Cr1c1, &Cr1c2, &Cr2c1, &Cr2c2);

	printf_s("The result is: \n");
	printf_s("%d\t%d\n", Cr1c1, Cr1c2);
	printf_s("%d\t%d\n", Cr2c1, Cr2c2);
}

void matrix_multiplier(int Ar1c1, int  Ar1c2, int  Ar1c3, int  Ar2c1, int  Ar2c2, int  Ar2c3, int  Br1c1, int  Br1c2, int  Br2c1, int  Br2c2, int  Br3c1, int  Br3c2, int* Cr1c1, int* Cr1c2, int* Cr2c1, int* Cr2c2)
{
	*Cr1c1 = (Ar1c1 * Br1c1) + (Ar1c2 * Br2c1) + (Ar1c3 * Br3c1);
	*Cr1c2 = (Ar1c1 * Br1c2) + (Ar1c2 * Br2c2) + (Ar1c3 * Br3c2);
    *Cr2c1 = (Ar2c1 * Br1c1) + (Ar2c2 * Br2c1) + (Ar2c3 * Br3c1);
	*Cr2c2 = (Ar2c1 * Br1c2) + (Ar2c2 * Br2c2) + (Ar2c3 * Br3c2);
}
