#include <stdio.h>
int max(int a, int b) 
{
    if (a>b)
    {
        return a;
    }
    else
    {
    return b ;
    }
}
int main()
 {
    int x , y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Greatest of the two numbers = %d", max(x,y));
    return 0;
}