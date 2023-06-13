// 10) Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5
// also calculate 5% percentage energy charge on total bill amount & display total amount 
#include<stdio.h>
void main()
{
     int unit;
     int price;
     int amount;
     float energy_charge;
     printf("Enter value of units ");
     scanf("%d",&unit);

     //check
     if(unit<100)
     {
          price = 1;
     }
     else if(unit>100 && unit<200)
     {
          price = 2 ;
     }
     else if(unit>200 && unit<300)
     {
          price = 3 ;
     }
     else if(unit>300 && unit<400)
     {
          price = 4;
     }
     else
     {
          price = 5;
     }
     amount = unit * price ;
     printf("\nThe value of bill is %d ",amount);
     energy_charge = amount * 5 / 100;
     printf("\nThe value of energy charge is %f ",energy_charge);
     amount = amount + energy_charge;
     printf("\nThe value of total bill after applying energy charge is %d ",amount);
}