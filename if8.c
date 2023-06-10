// 5)Write a programe to findout wether the user is eligible for voting or not.
#include<stdio.h>
void main()
{
     int age;

     printf("Enter value of age ");
     scanf("%d",&age);

     if(age >= 18)
     {
          printf("You are eligible for voting ");
     }
     else
     {
          printf("you are not eligible for voting ");
     }
     printf("\nGoodbyee...");
}