// 2)write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february
#include<stdio.h>
void main()
{
     int month;

     printf("Enter value of month ");
     scanf("%d",&month);

     //check
     if(month == 2)
     {
          printf("this month has 28 - 29 days ");
     }
     printf("Goodbyee..");
}