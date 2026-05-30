#include<stdio.h>
int main()
{
    int n1,n2 ,count=0 ,i,max=0,lcm;
    printf("Enter the value of n1 = ");
    scanf("%d",&n1);
    printf("Enter the value of n2 = ");
    scanf("%d",&n2);
    for(i=2;i<n1 && i<n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            max=i;
        }
    }
    lcm= (n1*n2)/max;
    printf("LCM = %d",lcm);
    return 0;
}