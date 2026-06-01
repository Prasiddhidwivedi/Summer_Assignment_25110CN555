#include <stdio.h>
int main() 
{
    int n, i, j, count, max = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
    {
        if(n % i == 0)
         {     
            count = 1;
        for(j = 2; j < i; j++)
         {
            if(i % j == 0)
             {
               count = 0;
                break;
             }
         }
            if(count == 1)
            {
                max = i;
            }
        }
    }
    printf("Largest Prime Factor = %d",max);
    return 0;
}