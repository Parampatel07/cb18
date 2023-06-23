// # 1
// # 22
// # 333
// # 4444
// # 55555
// # 666666
#include <stdio.h>
void main()
{
     int flash = 0;
     int count = 0;
     int temp = 1;
     // printf("1");
     // printf("\n");
     // printf("*");
     for(flash = 2 ; flash < 8 ; flash++)
     {
          for (count = 1; count < flash; count++)
          {
               printf("%d ",temp);
          }
          printf("\n");
          temp =temp + 1;
     }
     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for (count = 0; count < 4; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("*");
     // }
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}