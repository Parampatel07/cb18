// write a programe to get 10 rectangle lenth and width and find area of rectangle.
#include<stdio.h>
    void main()
{ 
    int lenth[10], width[10],temp,area[10];
    for (temp = 0; temp <= 9;temp++)
    {
        printf("Enter the value of lenth %d ",temp+1);
        scanf("%d", &lenth[temp]);
        printf("Enet the value of width %d ",temp+1);
        scanf("%d", &width[temp]);
    }
    for (temp = 0; temp <= 9;temp++)
    {
        area[temp] = lenth[temp] * width[temp];
    }
    for (temp = 0; temp <= 9;temp++)
    {
        printf(" area of reqtangle %d is %d \n",(temp+1), area[temp]);
}
}