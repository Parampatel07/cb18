// Write a programe to pefrom swap take input from user  
#include<stdio.h>
void main()
{
     int num1,num2,num3;
     printf("Enter value of number 1 ");
     scanf("%d",&num1);
     printf("Enter value of number 2 ");
     scanf("%d",&num2);
     num3 = num1;
     num1 = num2;
     num2 = num3;
     printf("The value of num1 is %d and num2 is %d ",num1,num2);
}