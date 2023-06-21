// Write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
// 0 1  2  3  4  5   6  7  8
#include <stdio.h>
void main()
{
     int number = 0;
     int answer = 0;
     int count= 0 ;
     // printf("%d ,", number);
     for(count = 0;answer<990 ; count++)
     {
          answer = answer + count;
          printf("%d ,", answer);
     }
     // answer = answer + 2;
     // printf("%d ,",answer);
     // answer = answer + 3;
     // printf("%d ,",answer);
     // answer = answer + 4;
     // printf("%d ,",answer);
}