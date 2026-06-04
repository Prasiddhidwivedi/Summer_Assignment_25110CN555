#include <stdio.h>
int main() 
{
    int binary[32] , i=0 , j,decimal;
    printf("Enter decimal number : ");
    scanf("%d",&decimal);
    if(decimal==0)
    {
       return 0;
    }
    while(decimal>0)
    {
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }
    printf("The binary conversion = ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
