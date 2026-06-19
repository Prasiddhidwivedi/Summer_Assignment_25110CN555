#include <stdio.h>
int main()
{
    int x,y;
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
    printf("Transpose of matrix: ");
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}