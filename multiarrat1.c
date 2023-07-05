#include<stdio.h>
void main()
{
    int num[4][4],temp,flash;

    for (temp = 0; temp <= 3;temp++)
    {
        for (flash = 0; flash <= 3;flash++)
        {
            printf("Enter valu of number ");
            scanf("%d", &num[temp][flash]);
            // printf("%d%d ", flash, temp);
        }
        printf("\n");
    }
}