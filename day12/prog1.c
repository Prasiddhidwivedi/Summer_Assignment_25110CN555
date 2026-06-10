#include <stdio.h>
int palindrome(int n)
{
    int org = n, rev = 0, r;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (org == rev)
        return 1;   
    else
        return 0;  
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (palindrome(num)==1)
        printf("%d is a palindrome number.",num);
    else
        printf("%d is not a palindrome number.",num);
    return 0;
}