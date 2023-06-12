// Write a programe to findout whether the user given alphabet is vowel or not 
#include<stdio.h>
void main()
{
     char letter ;

     printf("Enter value of letter ");
     scanf("%c",&letter);

     //check
     if(letter == 'a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter == 'A' || letter=='E' || letter=='I' || letter=='O'||letter=='U')
     {
          printf("it is vowel ");
     }
     else
     {
          printf("it is consonent ");
     }
}