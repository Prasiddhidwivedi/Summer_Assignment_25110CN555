#include <stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&x,&y);
    int A[10][10];
    printf("Enter elements of matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<x;i++)
    {
        sum=sum+A[i][i];
    }
    printf("Diagonal sum = %d",sum);
    return 0;
}