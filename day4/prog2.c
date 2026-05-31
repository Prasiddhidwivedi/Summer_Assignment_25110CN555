#include <stdio.h>
int main()
{
    int n, first = 0, sec = 1, next;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n == 1)
        printf("Nth Fibonacci term = %d", first);
    else if(n == 2)
        printf("Nth Fibonacci term = %d", sec);
    else
    {
        for(int i = 3; i <= n; i++)
        {
            next = first + sec;
            first = sec;
            sec = next;
        }
        printf("Nth Fibonacci term = %d", sec);
    }
    return 0;
}