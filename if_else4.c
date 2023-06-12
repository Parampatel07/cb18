// Write a programe to findout distance of planet from sun
// https://www.jpl.nasa.gov/edu/pdfs/scaless_reference.pdf
#include <stdio.h>
void main()
{
     int planet;
     long long int distance;
     printf("Enter number of planet ");
     printf("\nEnter 1 for Mercury");
     printf("\nEnter 2 for Venus");
     printf("\nEnter 3 for Earth");
     printf("\nEnter 4 for Mars");
     printf("\nEnter 5 for Jupiter");
     printf("\nEnter 6 for Saturn");
     printf("\nEnter 7 for Uranus");
     printf("\nEnter 8 for Neptune ");
     scanf("%d", &planet);

     // check
     if (planet == 1)
     {
          distance = 57900000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 2)
     {
          distance = 108200000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 3)
     {
          distance = 149600000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 4)
     {
          distance = 227900000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 5)
     {
          distance = 778600000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 6)
     {
          distance = 1433500000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 7)
     {
          distance = 2872500000;
          printf("distance is %lld ",distance);
     }
     else if (planet == 8)
     {
          distance = 4495100000;
          printf("distance is %lld ",distance);
     }
     else
     {
          printf("invalid planet ");
     }
     printf("\nGoodbyee...");
}