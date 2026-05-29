#include<stdio.h>
int main()
{
    int n,mul=1 ,r;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        mul=mul*r;
        n/=10;
    }
    printf("The product of digits in entered number = %d",mul);
    return 0;
}