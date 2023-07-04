#include<stdio.h>
void main()
{
    int row, col, temp = 5, col_1;

    for (row = 1; row <= 5;row++)
    {

    for (col = 1; col <= row;col++)
    {
        printf("_");
    }
    for (col_1 = 1; col_1 <= temp ; col_1++)
   {
    
        printf("%d ", col_1);
   }
    printf("\n");
    temp--;

    }
   
}