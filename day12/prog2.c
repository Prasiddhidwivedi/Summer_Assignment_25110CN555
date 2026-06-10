#include <stdio.h>
int armstrong(int n)
{
    int org = n, r, sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == org)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num)==1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}