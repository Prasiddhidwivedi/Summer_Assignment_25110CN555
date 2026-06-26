#include <stdio.h>
int main()
{
    int num = 75, guessnum = 0;
    while(guessnum != num)
    {
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guessnum);
        if(guessnum > num)
            printf(" Think of a lower number! \n");
        else if(guessnum < num)
            printf("Think of a higher number! \n");
        else
            printf("YaaY! You guess was correct.");
    }
    return 0;
}