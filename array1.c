#include<stdio.h>
void main()
{
    int height[10],size,a;
    for (size = 0; size <= 9;size++)
    {
        printf("Enter the value of height  ");
        scanf("%d", &height[size]);

   }

   for (size = 0; size <= 9;size++)
   {
        printf(" value of height %d is %d \n",(size+1), height[size]);

 }
}

