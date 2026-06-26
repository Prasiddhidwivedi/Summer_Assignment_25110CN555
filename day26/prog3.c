#include <stdio.h>
int main()
{
    int choice;
    float balance=50000,amount;
    printf("ATM MENU :- \n");
    printf("1.To Withdraw\n");
    printf("2.To Check Balance\n");
    printf("3.Exit\n");
    printf("4.To Deposit\n");
    printf("Enter the number according to your choice choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the amount to be withdrawn:");
            scanf("%f",&amount);
            if(amount<=balance)
            {
                balance=balance-amount;
                printf("Your Updated Balance = %f",balance);
            }
            else
                printf("Insufficient Balance");
            break;
        case 2:
            printf("Balance=%f",balance);
            break;
        case 3:
            printf("Thank You!");
            break;
        case 4:
            printf("Enter amount to deposit:");
            scanf("%f",&amount);
            balance=balance+amount;
            printf("Your Updated Balance=%f",balance);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}