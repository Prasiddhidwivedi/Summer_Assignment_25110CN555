#include<stdio.h>
int main()
{
    int n,count=0 ,i,sum=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;;
        }
    }
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a Perfect number");
    }
    return 0;
}