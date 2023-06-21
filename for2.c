// Write a programe to print multiplication table of user given number
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// ....
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 10;
     int mutliplier = 1;
     int answer = 5;
     printf("Enter value of table ");
     scanf("%d",&table);
     answer = table;
     for(mutliplier=1 ; mutliplier <= 10 ; answer = table * mutliplier )
     {
          printf("\n%d x %d = %d ", table, mutliplier, answer);
          mutliplier = mutliplier + 1; // 2
           // 10
     }
     // printf("\n%d x %d = %d ", table, mutliplier, answer);
     // mutliplier = mutliplier + 1; // 3
     // answer = table * mutliplier;
     // printf("\n%d x %d = %d ", table, mutliplier, answer);
     // mutliplier = mutliplier + 1; // 3
     // answer = table * mutliplier;
     // printf("\n%d x %d = %d ", table, mutliplier, answer);
}