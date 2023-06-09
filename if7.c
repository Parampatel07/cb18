// Write a programe to findout greater variable out of given 2 variable
#include <stdio.h>
void main()
{
     int number1, number2;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     // check
     if (number1 > number2)
     {
          printf("number 1 is greater ");
     }
     else
     {
          printf("number 2 is greater ");
     }

     printf("Goodbyee...");
}