#include<stdio.h>
int main()
{
    int n,count=0 ,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("The number is not prime");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("The number is prime");
    }
    else
    {
       printf("The number is not prime");
    }
    
    return 0;
}