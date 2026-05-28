#include<stdio.h>
int main()
{
    int n,fact=1 ,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("The factorial of the given number is = ");
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}