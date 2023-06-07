// Write a programe to findout simple intrest take input from user 
// --> amount  * rate * year / 100
#include<stdio.h>
void main()
{
     float amount,rate,intrest;
     int year;

     printf("Enter value of amount ");
     scanf("%f",&amount);
     printf("Enter value of rate ");
     scanf("%f",&rate);
     printf("Enter value of year ");
     scanf("%d",&year);
     
     intrest = amount * rate * year / 100;
     printf("the value of intrest is %f ",intrest);
}