// Write a programe to peform addition of 2 number take number from user 
#include<stdio.h>
void main()
{
     float number1=0,number2=0,answer=0;

     printf("Enter value of number 1 ");
     scanf("%f",&number1);
     printf("Enter value of number 2 ");
     scanf("%f",&number2);

     answer = number1 + number2;
     printf("the value of number 1 is %.2f ",number1);
     printf("\nThe value of number 2 is %.2f ",number2);
     printf("\nThe value of answer is %.2f ",answer);
}