//Name: Meigan Wright
//ID: 96871


//Matrix population program for employee information. 

#include <stdio.h>
#define rows 7
#define columns 5
#define r2 5

void main(void)
{
    double employeetable[rows][columns], total;    
    int id[r2];
    int i, j, l;

    for (i = 0; i < rows; i++)
            id[i] = 0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            employeetable[i][j] = 0;

    printf_s("Please Enter Employee Id:\n");
    for (i = 0; i < rows - 2; i++)
            scanf_s("%d", &id[i]);

   
    printf_s("Please Enter Course Info:\n");
    for (i = 0; i < rows - 2; i++)
    {

        for (j = 0; j < columns - 2; j++)
        {
            scanf_s("%lf", &employeetable[i][j]);
        }
    }
    for (i = 0; i < rows - 2; i++)
    {
        for (j = 0; j < columns - 2; j++)
        {
            employeetable[i][columns - 2] = employeetable[i][columns - 2] + employeetable[i][j];

            employeetable[i][columns - 2] = employeetable[i][columns - 2]*75;
        }
    }
    
    printf_s("\nEmployee ID\t\tYear1\tYear2\tYear3\tAmount Payable\n");
    for (i = 0; i <= rows - 3; i++)
    {
        printf_s("%d ", id[i]);
        for (j = 0; j <= columns - 2; j++)
            printf_s("%6.2f\t", employeetable[i][j]);
        printf_s("\n");
    }

}