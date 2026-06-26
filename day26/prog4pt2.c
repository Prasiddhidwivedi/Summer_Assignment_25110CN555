#include <stdio.h>
int main()
{
    int ans,finalscore=0;
    printf("QIZE TIMEEEEE \n");
    printf("1.Which planet is known as the Red Planet?\n");
    printf("1.Earth\n2.Mars\n3.Jupiter\n4.Venus\n");
    scanf("%d",&ans);
    if(ans==2)
        finalscore++;
    printf("2.Which is the largest ocean?\n");
    printf("1.Arctic Ocean\n2.Indian Ocean\n3.Atlantic Ocean\n4.Pacific Ocean\n");
    scanf("%d",&ans);
    if(ans==4)
        finalscore++;
    printf("3.How many months are there in a year?\n");
    printf("1.10\n2.11\n3.12\n4.13\n");
    scanf("%d",&ans);
    if(ans==3)
        finalscore++;
    printf("Your Score=%d",finalscore);
    return 0;
}