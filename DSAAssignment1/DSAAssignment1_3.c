#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter the order of 2D matrix (row*col)\n");
    scanf("%d %d",&row,&column);
    int arr[row][column];
    printf("Enter the 2D array\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            scanf("%d",&arr[i][j]);
    }
    int n=row*column;
    int b[n];
    int k=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            b[k]=arr[i][j];
            k++;
        }
    }
    printf("\n Final 1D array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}