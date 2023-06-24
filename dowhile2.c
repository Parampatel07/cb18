// Write a programe to findout factorail of user given number
#include <stdio.h>
void main()
{
     int number = 7;
     int count = 2;
     int answer = 0;
     printf("Enter value of number  ");
     scanf("%d",&number);

     answer = number * (number - 1);
     do
     {
          answer = answer * (number - count);
          count++;
     } while (count < number);
     printf("the value of answer is %d ",answer);
     // answer = answer * (number - 3);
     // answer = answer * (number - 4);
     // answer = answer * (number - 5);
     // answer = answer * (number - 6);
}