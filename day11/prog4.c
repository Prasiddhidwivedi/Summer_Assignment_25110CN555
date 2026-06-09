#include <stdio.h>
int factorial(int n) 
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
      fact*=i;
    }
    return fact;
}
int main()
 {
    int x ;
    printf("Enter any number: ");
    scanf("%d", &x);
    printf("Factorial = %d " ,factorial(x));
    return 0;
}