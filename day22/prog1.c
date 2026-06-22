#include <stdio.h>
int main()
{
    char str[100], org[100], temp;
    int len = 0, i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        org[i] = str[i];
        len++;
    }
    org[i] = '\0';
    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    for(i = 0; org[i] != '\0'; i++)
    {
        if(org[i] != str[i])
        {
            printf("Not a Palindrome String");
            return 0;
        }
    }
    printf("Palindrome String");
    return 0;
}