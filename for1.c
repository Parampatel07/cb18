#include <stdio.h>
void main()
{
    int row,col,temp=5;

    for (row = 1; row <= 5;row++)
    {

        for (col = 1; col <= temp;col++)
        {
            if(row==1 || col==1 || col==temp)
            {
            printf("* ");

            }
            else
            {
            printf("  ");
            }

        }

        temp--;
        printf("\n");

    }
   
}

  