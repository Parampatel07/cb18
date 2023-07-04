#include <stdio.h>
void main()
{
    int row, col, temp;
    temp = 5;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= temp; col++)
        {
            if(col==1|| row==1 || col==temp)
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