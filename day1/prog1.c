#include<stdio.h>
int main()
{
    int n,sum=0 ,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The value of sum of n numbers = %d",sum);
    return 0;
}