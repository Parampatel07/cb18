// Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// https://in.pinterest.com/pin/81698180718875314/
// month = 2
// day = 10
#include<stdio.h>
void main()
{
     int month,day;
     printf("Enter value of month ");
     scanf("%d",&month);
     printf("Enter value of day ");
     scanf("%d",&day);

     if((month==3 && day>=21 && day<=31) || (month==4 && day<=19 && day>0))
     {
          printf("your zodiac sign is aries zodiac symbol is ram ");
     }
     else if((month==4 && day>=20 && day<=30) || (month==5 && day<=20 && day>0))
     {
          printf("Your zodiac sign is taurus and zodiac symbol is bull");
     }
}