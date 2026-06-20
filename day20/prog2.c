#include <stdio.h>
int main()
{
    int x,y,flag=0;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d",&x,&y);
    if(x!=y)
    {
        printf("Matrix is not symmetric");
        return 0;
    }
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
        for(int j=0;j<y;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }
    return 0;
}