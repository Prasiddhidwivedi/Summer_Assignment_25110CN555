#include <stdio.h>
struct Banking
{
    int accountno;
    char name[50];
    float balance;
};
int main()
{
    struct Banking b[100];
    int choice=0,n=0,i,accountno,found;
    while(1)
    {
        printf("1.To Add Account\n");
        printf("2.To Display Accounts\n");
        printf("3.To Search Account\n");
        printf("4.To Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d",&b[n].accountno);
                printf("Enter Account Holder Name: ");
                scanf("%s",b[n].name);
                printf("Enter Balance: ");
                scanf("%f",&b[n].balance);
                n++;
                printf("Account Added .");
                break;
            case 2:
                if(n==0)
                {
                    printf("Record not found.");
                }
                else
                {
                    printf("\nAccNo\tName\tBalance\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%.2f\n",b[i].accountno,b[i].name,b[i].balance);
                    }
                }
                break;
            case 3:
                printf("Enter Account Number: ");
                scanf("%d",&accountno);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(b[i].accountno==accountno)
                    {
                        printf("\nAccount Found\n");
                        printf("Account Number:%d\n",b[i].accountno);
                        printf("Name:%s\n",b[i].name);
                        printf("Balance:%.2f\n",b[i].balance);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Record not found.");
                }
                break;
            case 4:
                printf("Terminating the program");
                return 0;
            default:
                printf("Invalid Choice!");
        }
    }
    return 0;
}