#include<stdio.h>
void main()
{
    int row,col1,col2,temp,count;
    temp = 5;
    count = 1;

    for (row = 1; row <= 5;row++)
    {
        for (col1 = 1; col1 <= count;col1++)
        {

            printf("_");

        }

        for (col2 = 1; col2 <= temp;col2++)
        {
            if(col2==1 || row==1 || temp==col2)
            {
            printf("%d ", col2);

            }
            else 
            {
            printf("  ");
            }
            
        }
        
        printf("\n");
        temp--;
        count ++;
}
printf("good byeee");
}