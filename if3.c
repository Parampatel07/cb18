// Write a programe to findout wether the user given number is negative or not if negative give message "number is negative "
#include<stdio.h>
void main()
{
     int number;

     printf("Enter value of number ");
     scanf("%d",&number);

     //check
     if(number < 0)
     {
          printf("it is negative number ");
     }
     printf("\nGoodbyee..");
}