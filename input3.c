// Write a programe to findout bmi of user 
// bmi = weight (kg ) / height (meter) * (meter)
#include<stdio.h>
void main()
{
     float weight ,foot_meter,inch_meter,total_height,bmi;
     int foot , inch;

     printf("Enter value of weight in kg ");
     scanf("%f",&weight);
     printf("Enter value of height in foot ");
     scanf("%d",&foot);
     printf("Enter value of height in inch ");
     scanf("%d",&inch);

     printf("the value of weight in kg is %f ",weight);
     printf("\nthe value of height in foot is %d ",foot);
     printf("\nthe value of height in inch is %d ",inch);

     foot_meter = foot / 3.281;
     printf("\nthe value of foot meter is %.2f ",foot_meter);

     inch_meter = inch / 39.37;
     printf("\nthe value of inch meter is %.2f ",inch_meter);

     total_height = foot_meter + inch_meter;
     printf("\nthe value of total height is %.2f ",total_height); 

     bmi = weight / (total_height * total_height);
     printf("\nthe value of bmi is %.2f ",bmi);
}