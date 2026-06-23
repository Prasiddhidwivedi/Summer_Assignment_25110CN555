#include <stdio.h>
int main()
{
    char str[100],maxch;int i,j,c,max=0;
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0' && str[i]!='\n';i++)
    {
        c=0;
        for(j=0;str[j]!='\0' && str[j]!='\n';j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            maxch=str[i];
        }
    }
    printf("Maximum occurring character is = %c",maxch);
    return 0;
}