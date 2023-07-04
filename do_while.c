#include <stdio.h>
void main()
{
    int row, coumn;
    row = 1;
    coumn = 1;

    do
    {
        do
        {
            if (row == 5 || coumn == 1 || row == coumn)
            {

                printf("%d ", coumn);
            }
            else
            {
                printf("  ");
            }
            coumn++;
        } while (coumn <= row);

        coumn = 1;
        printf("\n");
        row++;
    } while (row <= 5);

    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
}