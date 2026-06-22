#include <stdio.h>
int main()
{
    char sen[200];
    int count=0,i;
    printf("Enter a sentence: ");
    fgets(sen,sizeof(sen),stdin);

    for(i=0;sen[i]!='\0';i++)
    {
        if((sen[i]!=' '&&sen[i+1]==' ')||
           (sen[i]!=' '&&sen[i+1]=='\0'))
        {
            count++;
        }
    }
    printf("Number of words = %d",count);
    return 0;
}