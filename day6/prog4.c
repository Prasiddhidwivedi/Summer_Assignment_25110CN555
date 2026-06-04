#include <stdio.h>
int main() 
{
    int base, exp, res = 1;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter exponent : ");
    scanf("%d", &exp);
    for (int i = 1; i <= exp; i++)
     {
        res = res * base;
     }
    printf("Answer of %d^%d = %d", base, exp, res);
    return 0;
}