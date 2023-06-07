// Write a programe to peform split of 2digit number 
// -> number = 45
// first = 4 , second = 5
#include<stdio.h>
void main()
{
     int number;
     int first , second;
     printf("Enter value of number ");
     scanf("%d",&number);
     // number = 56;
     first = number / 10 ;
     second = number % 10 ;
     printf("the value of first is %d ",first);
     printf("\nthe value of second id %d ",second);
}