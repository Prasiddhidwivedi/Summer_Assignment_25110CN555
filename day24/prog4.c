#include <stdio.h>
int main()
{
    char str[100], res[100];
    int i, j, found, k = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(str[i] == res[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            res[k] = str[i];
            k++;
        }
    }
    res[k] = '\0';
    printf("String after removing duplicates: %s", res);
    return 0;
}