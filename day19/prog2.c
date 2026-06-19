#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&x,&y);
    int A[10][10],B[10][10],Sum[10][10];
    printf("Enter elements of first matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second matrix: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            Sum[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("difference of the matrices: ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d ",Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}