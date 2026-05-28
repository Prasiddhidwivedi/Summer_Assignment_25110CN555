#include<stdio.h>
int main()
{
    int n,mul=1 ,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("The muliplication table of the given number is = ");
    for(i=1;i<=10;i++)
    {
      mul=mul*i;
      printf("%d x %d = %d \n",n,i,mul);
    }
    return 0;
}