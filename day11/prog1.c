#include <stdio.h>
int sum(int a,int b) 
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
 {
    int x , y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Sum of the two numbers = %d", sum(x,y));
    return 0;
}