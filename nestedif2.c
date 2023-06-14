// Write a programe to findout How many days user given month has you cannot use if esle ladder and && ||
// 1     January - 31 days
// 2     February - 28 days in a common year and 29 days in leap years
// 3     March - 31 days
// 4     April - 30 days
// 5     May - 31 days
// 6     June - 30 days
// 7     July - 31 days
// 8     August - 31 days
// 9     September - 30 days
// 10    October - 31 days
// 11    November - 30 days
// 12    December - 31 days
#include <stdio.h>
void main()
{
     int month, answer;
     printf("Enter any month ");
     scanf("%d", &month);

     if (month == 2)
     {
          printf("It has 28 - 29 days ");
     }
     else
     {
          if(month==1)
          {
               printf("it has 31 Days ");
          }
          else
          {
               if(month==3)
               {
                    printf("it has 30 days ");
               }
               else
               {
                    if(month==4)
                    {
                         printf("it has  31 days ");
                    }
                    else
                    {

                    }
               }
          }
     }
     // else if(month==2)
     // {
     //      printf("It has 28 - 29 days ");
     // }

    
}