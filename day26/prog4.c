#include <stdio.h>
int main()
{
    int ans,finalscore=0;
    printf("QUIZ TIMEEEEEE \n");
    printf("Q1.Which planet is known as the Red Planet? \n");
    printf("1.Earth\n");
    printf("2.Mars\n");
    printf("3.Jupiter\n");
    printf("4.Venus\n");
    printf("Enter your answer:");
    scanf("%d",&ans);
    if(ans==2)
        finalscore++;
    printf("\nQ2.How many months are there in a year?\n");
    printf("1. 10\n");
    printf("2. 11\n");
    printf("3. 12\n");
    printf("4. 13\n");
    printf("Enter your answer:");
    scanf("%d",&ans);
    if(ans==3)
        finalscore++;
    printf("\nQ3.Which is the largest ocean in the world?\n");
    printf("1.Arctic Ocean\n");
    printf("2.Indian Ocean\n");
    printf("3.Atlantic Ocean\n");
    printf("4.Pacific Ocean\n");
    printf("Enter your answer:");
    scanf("%d",&ans);
    if(ans==4)
        finalscore++;
    printf("\n Your Final Score = %d/3",finalscore);
    return 0;
}