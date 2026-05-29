#include<stdio.h>
int main()
{
    int n,rev=0 ,r;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev = rev*10+r;
        n/=10;
    }
    printf("The reverse of the entered number = %d",rev);
    return 0;
}