#include <stdio.h>
int main()
{
    int n, first = 0, sec = 1, next;
    printf("Enter the number of terms= ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", first);
        next = first + sec;
        first = sec;
        sec = next;
    }
    return 0;
}