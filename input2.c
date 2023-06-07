// Write a programe to findout area of circle take input from user 
#include<stdio.h>
void main()
{
     float pi = 3.14159 , radius = 0, area = 0;

     printf("Enter value of radius ");
     scanf("%f",&radius);
     printf("the value of radius is %f ",radius);

     area = pi * (radius * radius);
     printf("\nThe value of area is %f ",area);
}