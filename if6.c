// 3)write a program to accept one letter from user. if letter is (a) then print message "it is first letter of abcd".
#include<stdio.h>
void main()
{
     char letter;

     printf("Enter value of letter ");
     scanf("%c",&letter);

     //check
     if(letter == 'a')
     {
          printf("it is first letter of abcd ");
     }
     printf("\nGoodbyee...");
}