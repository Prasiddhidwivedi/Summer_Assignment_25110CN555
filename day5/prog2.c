#include<stdio.h>
int main()
{
    int n,fact ,i,r,org ,sum=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
    for(i=1;i<=r;i++)
    {
      fact=fact*i;
    }
    sum=sum+fact;
    n/=10;
    }
    if(sum==org)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a Strong number");
    }
    return 0;
}