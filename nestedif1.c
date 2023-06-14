// Write a programe to print days for user given number
// 1 - > Monday
// 2 - > Tuesday
// 3 - > Wednesday
// 4 - > Thursday
// 5 - > Friday
// 6 - > Saturday
// 7 - > Sunday
#include <stdio.h>
void main()
{
     int number;

     printf("Enter value of number ");
     scanf("%d", &number);

     if (number > 0 && number < 8)
     {
          if (number == 1)
          {
               printf("Monday ");
          }
          else if (number == 2)
          {
               printf("Tuesday ");
          }
          else if (number == 3)
          {
               printf("Wednesday ");
          }
          else if (number == 4)
          {
               printf("Thursday ");
          }
          else if (number == 5)
          {
               printf("Friday ");
          }
          else if (number == 6)
          {
               printf("Saturday ");
          }
          else if (number == 7)
          {
               printf("Sunday ");
          }
          else
          {
               printf("Invalid number ");
          }
     }
     else
     {
          printf("Invalid input ");
     }
}