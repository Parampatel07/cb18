// Write a programe to findout how many days user given month has 
#include<stdio.h>
void main()
{
     int month;

     printf("Enter value of month ");
     scanf("%d",&month);

     if(month==1 || month==3 || month==5 || month==7 || month == 8 || month == 10||month==12)
     {
          printf("it has 31 days ");
     }
     else if(month==4 || month==6 || month == 9 || month==11)
     {
          printf("it has 30 days ");
     }
     else if(month==2)
     {
          printf("it has 28 - 29 days ");
     }
     else
     {
          printf("invalid month ");
     }
}