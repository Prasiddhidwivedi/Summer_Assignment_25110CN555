#include <stdio.h>
int main()
{
    char str[100];int i, j, c;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        c = 0;
        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if(str[i] == str[j])
            {
                c++;
            }
        }
        if(c == 1)
        {
            printf("First non-repeating character = %c",str[i]);
            break;
        }
    }
    return 0;
}