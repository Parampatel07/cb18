// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2, second = 1;
     int answer;
     printf("%d %d ", first, second);
     answer = first + second;

     while(answer<2207)
     {
          first = answer;        //
          printf("%d ", answer); // 3
          answer = second + answer;
          second = answer;
          printf("%d ", answer); // 4
          answer = first + answer;
     }
     // first = answer ;
     // printf("%d ",answer);//7
     // answer = second + answer;
     // second = answer ;
     // printf("%d ",answer);//11
     // answer = first + answer;
     // printf("%d ",answer);
     // answer = second + answer;
     // printf("%d ",answer);
}