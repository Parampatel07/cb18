#include <stdio.h>
void main()
{

    int marks[5][5], temp, flash, avg[5], j;

    for (flash = 0; flash <= 4; flash++)
    {
        printf("Enter marks of stude %d\n", flash + 1);
        for (temp = 0; temp <= 4; temp++)
        {
            printf(" Enete marks of subject %d ", temp + 1);
            scanf("%d", &marks[flash][temp]);
        }
    }
    for (j = 0; j <= 4; j++)
    {
        avg[j] = (marks[j][0] + marks[j][1] + marks[j][2] + marks[j][3] + marks[j][4]) / 5;
        printf(" avg of student %d is %d \n", (j + 1), avg[j]);
    }

    if (avg[0] > avg[1] && avg[0] > avg[2] && avg[0] > avg[3] && avg[0] > avg[4])
    {
        printf(" student 1 have highest rank ");
    }
    else if (avg[1] > avg[0] && avg[1] > avg[2] && avg[1] > avg[3] && avg[1] > avg[4])
    {
        printf(" student 2 have highest rank ");
    }
    else if (avg[2] > avg[0] && avg[2] > avg[1] && avg[2] > avg[3] && avg[2] > avg[4])
    {
        printf(" student 3 have highest rank ");
    }
    else if (avg[3] > avg[0] && avg[3] > avg[1] && avg[3] > avg[2] && avg[3] > avg[4])
    {
        printf(" student 4 have highest rank ");
    }
    else if (avg[4] > avg[0] && avg[4] > avg[1] && avg[4] > avg[2] && avg[4] > avg[3])
    {
        printf(" student 5 have highest rank ");
    }
    printf("good bye.......");
}

/*
#include <stdio.h>
void main()
{
    int number[4][4], temp, flash, count = 1;

    for (flash = 0; flash <= 3; flash++)
    {
        for (temp = 0; temp <= 3; temp++)
        {
            printf("Enter value of number %d ", count);
            count++;
            scanf("%d", &number[flash][temp]);
        }
    }
}
*/