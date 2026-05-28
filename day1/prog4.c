#include<stdio.h>
int main()
{
    int n,count=0 ,r;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        count++;
        n/=10;
    }
    printf("The numner of digits in entered number = %d",count);
    return 0;
}