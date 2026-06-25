#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of words: ");
    scanf("%d",&n);
    char w[n][50], temp[50];
    printf("Enter words: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", w[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strlen(w[i]) > strlen(w[j]))
            {
                strcpy(temp, w[i]);
                strcpy(w[i], w[j]);
                strcpy(w[j], temp);
            }
        }
    }
    printf("Words sorted by length:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", w[i]);
    }
    return 0;
}