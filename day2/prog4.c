#include<stdio.h>
int main()
{
    int n,rev=0 ,r , org ;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        r=n%10;
        rev = rev*10+r;
        n/=10;
    }
    if(org==rev)
    {
       printf("The number is palindrome");
    }
    else
    {
       printf("The number is not palindrome");
    }
    
    return 0;
}