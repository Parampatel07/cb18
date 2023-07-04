#include <stdio.h>
void main()
{
    int row, col, temp;
    temp = 5;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            if(col==1|| row==5 || col==row)
            {
                printf("%d ", col);
             }
             else
             {
                printf("  ");
             }
         }

        printf("\n");
            temp--;
    }
}