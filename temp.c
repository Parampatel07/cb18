#include<stdio.h>
 void main()
 {

     int marks[5][5],temp,flash;

     for (flash = 0; flash <= 4;flash++)
     {
         printf("Enter marks of stude %d\n",flash+1);
         for (temp = 0; temp <= 4; temp++)
         {
             printf(" Enete marks of subject %d ",temp+1);
             scanf("%d", &marks[0][temp]);
         }
   }


 }






















































/*
#include <stdio.h>
void main()
{
    int number[4][4], temp, flash, count = 1;

    for (flash = 0; flash <= 3; flash++)
    {
        for (temp = 0; temp <= 3; temp++)
        {
            printf("Enter value of number %d ", count);
            count++;
            scanf("%d", &number[flash][temp]);
        }
    }
}
*/