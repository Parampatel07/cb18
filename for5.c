// Write a programe to findout power and exponent of given number
#include <stdio.h>
void main()
{
     int base;
     int power;
     int answer;
     int count =0;
     printf("Enter value of base ");
     scanf("%d", &base);
     printf("Enter value of power ");
     scanf("%d", &power);
     base = 5;
     power = 6;
     // 5 * 5 * 5 * 5 * 5 * 5
     answer = base * base; // 5 * 5= 25
     for(count = 2; count < power ; count = count +1)
     {
          answer = answer * base;
     }
     // answer = answer * base;
     // answer = answer * base;
     // answer = answer * base;
     printf("the value of answer is %d ", answer);
}