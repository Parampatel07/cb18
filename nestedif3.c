// Write a programe to findout smallest variable out of given 3 variables do not use && ||
#include <stdio.h>
void main()
{
     int number1, number2, number3;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);
     printf("Enter value of number 3 ");
     scanf("%d", &number3);

     if (number1 == number2 && number2 == number3)
     {
          printf("All are same ");
     }
     else
     {
          if (number1 < number2)
          {
               if (number1 < number3)
               {
                    printf("number 1 is smallest ");
               }
               else
               {
                    printf("number 3 is smallest ");
               }
          }
          else
          {
               if (number2 < number3)
               {
                    printf("number 2  is smallest ");
               }
               else
               {
                    printf("number 3 is smallest ");
               }
          }
     }

     printf("Goodbyee..");
}