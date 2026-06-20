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
    for(int i=0;i<x;i++)
    {
        int sum=0;
        for(int j=0;j<y;j++)
        {
            sum=sum+A[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}