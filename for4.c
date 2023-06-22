// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 300
//  4  7  10  13 16
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;
     int count = 7;
     printf("%d ", number);
     answer = number + 4; // 5
     printf("%d ", answer);

     for (number = 1; answer < 287; count = count + 3)
     {
          answer = answer + count; // 12
          printf("%d ", answer);
     }
     
     // answer = answer + 10;//22
     // printf("%d ",answer);
     // answer = answer + 13;
     // printf("%d ",answer);
}