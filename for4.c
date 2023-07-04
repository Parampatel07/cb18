#include<stdio.h>
void main()
{

    int row,col,temp,flash;
    flash = 5;
    for (row = 1; row <= 5;row++)
    {
        for (col = 1; col <= flash;col++)
        {
            printf(" ");
        }

        for (temp = 1; temp <= row;temp++)
        {
            if(row==5 ||  temp==1 || row ==temp)
            {
            printf("* ");
            }
            else{
            printf("  ");
            }
         }
         
    printf("\n");
    flash--;

    }
}