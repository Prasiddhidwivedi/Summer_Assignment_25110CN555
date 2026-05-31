#include<stdio.h>
int main()
{
    int n,sum=0 ,r,org;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n/=10;
    }
    if(org==sum)
    {
       printf("The number entered is armstrong");
    }
    else
    {
        printf("The number entered is not armstrong");

    }
    return 0;
}