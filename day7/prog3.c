#include <stdio.h>
int sumofDigits(int n) 
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
    return (n % 10) + sumofDigits(n / 10);
    }
}
int main()
 {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Sum of digits of the number = %d", sumofDigits(n));
    return 0;
}