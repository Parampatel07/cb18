// Write a programe to print following pattern
// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
     int number = 1, answer = 0;

     printf("%d ", number);
     
     while(answer < 9261)
     {
          number = number + 1; // 2
          answer = number * number * number;
          printf("%d ", answer);
     }
     // number = number + 1; // 3
     // answer = number * number * number;
     // printf("%d ", answer);
     // number = number + 1; // 4
     // answer = number * number * number;
     // printf("%d ", answer);
     // number = number + 1; // 5
     // answer = number * number * number;
     // printf("%d ", answer);
}