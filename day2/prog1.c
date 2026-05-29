#include<stdio.h>
int main()
{
    int n,sum=0 ,r;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    printf("The sum of the digits of entered number = %d",sum);
    return 0;
}