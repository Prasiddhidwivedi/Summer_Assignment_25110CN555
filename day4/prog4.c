#include<stdio.h>
int main()
{
    int n1,n2,sum ,r,org ,temp;
    printf("Enter the starting of range = ");
    scanf("%d",&n1);
    printf("Enter the ending of range = ");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++)
   {
    org=i;
    temp =i;
    sum=0;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
    }
    if(org==sum)
    {
       printf("%d ",org);
    }
}
   
    return 0;

}