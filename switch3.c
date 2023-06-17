// write a programe to print number in words using switch case only 2 digit number
// => 12 -  > One two
// 74 - > seven four 
#include<stdio.h>
void main()
{
     int number,first,second;
     printf("Enter value of number any digit number only ");
     scanf("%d",&number);
     if(number<10 && number>99)
     {
          printf("Please enter only 2 digit number ");
     }
     else
     {
          first = number / 10;// 7 
          second = number % 10; //4
          switch(first)
          {
               case 1:
               printf("One ");
               break;

               case 2:
               printf("Two ");
               break;

               case 3:
               printf("Three ");
               break;

               case 4:
               printf("Four ");
               break;

               case 5:
               printf("Five ");
               break;

               case 6:
               printf("Six ");
               break;

               case 7:
               printf("Seven ");
               break;

               case 8:
               printf("Eight ");
               break;

               case 9:
               printf("Nine ");
               break;

               case 0:
               printf("Zero ");
               break;
          }
     
          switch(second)
          {
               case 1:
               printf("One ");
               break;

               case 2:
               printf("Two ");
               break;

               case 3:
               printf("Three ");
               break;

               case 4:
               printf("Four ");
               break;

               case 5:
               printf("Five ");
               break;

               case 6:
               printf("Six ");
               break;

               case 7:
               printf("Seven ");
               break;

               case 8:
               printf("Eight ");
               break;

               case 9:
               printf("Nine ");
               break;

               case 0:
               printf("Zero ");
               break;
          }
     }
}