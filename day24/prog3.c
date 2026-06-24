#include <stdio.h>
int main()
{
    char str[100], longest[100];
    int i,j,len=0,max=0,start=0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
                for(j = 0; j < len; j++)
                {
                    longest[j] = str[start + j];
                }
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }
    }
    printf("Longest word: %s", longest);
    return 0;
}