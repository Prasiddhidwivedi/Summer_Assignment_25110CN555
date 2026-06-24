#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    if(strlen(str1) != strlen(str2))
    {
        printf("String is not a rotation");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2))
    {
        printf("String is a Rotation");
    }
    else
    {
        printf("String is Not a rotation");
    }
    return 0;
}