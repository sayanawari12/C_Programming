#include<stdio.h>
int main ()
{
    int rows;
    printf("enter the number of rows:-");
    scanf("%d",&rows);

    int columans;
    printf("enter the number of columans:-");
    scanf("%d",&columans);

    int arr[rows][columans];

    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<columans; j++)
        {
            printf("enter the number:-");
            scanf("%d",&arr[i][j]);
        }
    
    }
    printf("\nMatrix is:\n");
     for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columans; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}