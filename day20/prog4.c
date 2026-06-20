#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d",&x,&y);
    int A[x][y];
    printf("Enter elements of matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int j=0;j<y;j++)
    {
        int sum=0;
        for(int i=0;i<x;i++)
        {
            sum=sum+A[i][j];
        }
        printf("Sum of column %d = %d\n",j+1,sum);
    }
    return 0;
}