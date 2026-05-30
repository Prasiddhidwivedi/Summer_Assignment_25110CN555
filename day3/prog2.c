#include<stdio.h>
int main()
{
    int n1,n2, count=0 ,i;
    printf("Enter the starting of range = ");
    scanf("%d",&n1);
    printf("Enter the ending of range = ");
    scanf("%d",&n2);
    printf("The prime numbers in the given range are = ");
    for(i=n1;i<=n2;i++)
    {
        if(i<=1)
        {
            continue;
        }
        count=0;
        for(int j=2;j<i;j++)
        {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("%d ",i);
    }
    }
    return 0;
}