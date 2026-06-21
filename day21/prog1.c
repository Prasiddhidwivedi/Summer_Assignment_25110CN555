#include <stdio.h>
int main()
{
    char str[100];
    int l=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[l]!='\0')
    {
        l++;
    }
    printf("Length of string = %d",l);
    return 0;
}