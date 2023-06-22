// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     int temp = 3;

     for (count = 0; count < 6; count = count + 1)
     {
          printf("*");
     }

     for(flash = 0 ; flash < 5 ; flash = flash  +1 )
     {
          printf("\n");
          printf("*");
          for (count = 0; count <= temp; count = count + 1)
          {
               printf(" ");
          }
          temp = temp - 1;
          printf("*");
     }
     printf("\n");
     printf("*");
     // for(count = 0 ; count < 2 ; count = count + 1)
     // {
     //      printf("_");
     // }
     // // printf("_");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}