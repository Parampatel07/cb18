// # 1
// # 12
// # 123
// # 1234
// # 12345
// # 123456
#include <stdio.h>
void main()
{
     int flash = 0;
     int count = 0;
     // printf("1");
     // printf("\n");
     // printf("*");
     for(flash = 2 ; flash < 7 ; flash++)
     {
          for (count = 1; count < flash; count++)
          {
               printf("%d ",count);
          }
          printf("\n");
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