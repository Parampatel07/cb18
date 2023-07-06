#include<stdio.h>
void main()
{

    int num[4][4],temp,flash,count=1;

    for (flash = 0; flash <= 3;flash++)
    {
        for (temp = 0; temp <= 3; temp++)
        {
            printf("Enete value of number %d ",count);
            scanf("%d", &num[flash][temp]);
            count++;
        }
}




// for (temp = 0; temp <= 3; temp++)
// {
//         printf("Enete value of number ");
//         scanf("%d", &num[1][temp]);
// }
// for (temp = 0; temp <= 3; temp++)
// {
//         printf("Enete value of number ");
//         scanf("%d", &num[2][temp]);
// }
// for (temp = 0; temp <= 3; temp++)
// {
//         printf("Enete value of number ");
//         scanf("%d", &num[3][temp]);
// }

    // printf("Enete value of number ");
    // scanf("%d", &num[0][1]);
    // printf("Enete value of number ");
    // scanf("%d", &num[0][2]);
    // printf("Enete value of number ");
    // scanf("%d", &num[0][3]);
}

// int num[4][4], temp, flash;

// for (temp = 0; temp <= 3; temp++)
// {
//     for (flash = 0; flash <= 3; flash++)
//     {
//         printf("Enter valu of number ");
//         scanf("%d", &num[temp][flash]);
//         // printf("%d%d ", flash, temp);
//     }
//     printf("\n");
// }