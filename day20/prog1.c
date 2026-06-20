#include <stdio.h>
int main()
{
    int x,y,p,q;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&x,&y);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);
    if(y!=p)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }
    int A[x][y],B[p][q],C[x][q];
    printf("Enter elements of the first matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of the second matrix: ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j]=0;
            for(int k=0;k<y;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant Matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}