#include <stdio.h>
void fibonacci(int n)
{
    int first = 0, sec = 1, next;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first);
        next = first + sec;
        first = sec;
        sec = next;
    }
}
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}