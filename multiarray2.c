#include<stdio.h>
void main()
{
    int marks[5][5],temp,flash,avg[5],j;
    for (flash = 0; flash <= 4;flash++)
    {
        printf("Enter the student %d marks\n",flash+1);
        for (temp = 0; temp <= 4; temp++)
        {
            printf("Enter %d subject marks ",temp+1);
            scanf("%d", &marks[flash][temp]);
        }
  }
  for (j = 0; j <= 4;j++)
  {

  avg[j] = (marks[j][0] + marks[j][1] + marks[j][2] + marks[j][3] + marks[j][4])/5;
  printf("avg of student %d is %d\n",j+1, avg[j]);
  }



//   avg[1] = marks[1][0] + marks[1][1] + marks[1][2] + marks[1][3] + marks[1][4];
//   avg[2] = marks[2][j] + marks[2][1] + marks[2][2] + marks[2][3] + marks[2][4];

  //    printf("Enter the student 2 marks\n");
  //    for (temp = 0; temp <= 4; temp++)
  //    {
  //         printf("Enter 1 subject marks ");
  //         scanf("%d", &marks[1][temp]);
  //    }
  //    printf("Enter the student 3 marks\n");
  //    for (temp = 0; temp <= 4; temp++)
  //    {
  //         printf("Enter 1 subject marks ");
  //         scanf("%d", &marks[2][temp]);
  //    }
  //    printf("Enter the student 4 marks\n");
  //    for (temp = 0; temp <= 4; temp++)
  //    {
  //         printf("Enter 1 subject marks ");
  //         scanf("%d", &marks[3][temp]);
  //    }
  // printf("Enter 2 subject marks ");
  // scanf("%d", &marks[0][1]);
  // printf("Enter 3 subject marks ");
  // scanf("%d", &marks[0][2]);
  // printf("Enter 1 subject marks ");
  // scanf("%d", &marks[0][3]);
}