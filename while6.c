// Write a programe to print inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int falsh = 0;
     int temp = 6;
     while (falsh <= 5)
     {
          while (count < temp)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          temp = temp - 1;
          count = 0;
          falsh = falsh + 1;
     }
     // printf("\n");
     // printf("*");
     // while (count < 5)
     // {
     //      count = count + 1;
     // }
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 3)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("*");
     // printf("*");
}