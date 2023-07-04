#include <stdio.h>
void main()
{
    int col1, col2, row, temp, flash;
    temp = 4;
    flash = 1;
    for (row = 1; row <= 5; row++)
    {

        for (col1 = 1; col1 <= temp; col1++)
        {

            printf(" ");
        }

        for (col2 = 1; col2 <= flash; col2++)
        {
            printf("* ");
        }

        printf("\n");
        flash = flash + 1;
        temp = temp - 1;
    }
}