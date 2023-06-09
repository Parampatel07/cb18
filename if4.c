// 1)write a program to accept height from user as float value(foot.inch). display message "you are short" if height is less then 5 foot 
// height = 5.7
#include<stdio.h>
void main()
{
     float height;

     printf("Enter value of height ");
     scanf("%f",&height);

     //check
     if(height < 5)
     {
          printf("you are short");
     }
     printf("\nGoodbyee...");
}