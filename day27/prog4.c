#include <stdio.h>
struct Marksheetinfo
{
    char name[50];
    int roll;
    float m1,m2,m3,total,per;
};
int main()
{
    struct Marksheetinfo s[100];
    int choice=0,n=0,i,roll,found;
    while(1)
    {
        printf("1.To Add Record\n");
        printf("2.To Display Records\n");
        printf("3.To Search Record\n");
        printf("4.To Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d",&s[n].roll);
                printf("Enter Name: ");
                scanf("%s",s[n].name);
                printf("Enter Marks of first sunject: ");
                scanf("%f",&s[n].m1);
                printf("Enter Marks of second Subject: ");
                scanf("%f",&s[n].m2);
                printf("Enter Marks of third Subject: ");
                scanf("%f",&s[n].m3);
                s[n].total=s[n].m1+s[n].m2+s[n].m3;
                s[n].per=s[n].total/3;
                n++;
                printf("Record updated.");
                break;
            case 2:
                if(n==0)
                {
                    printf("No records found.");
                }
                else
                {
                    printf("\nRoll\tName\tTotal\tPercentage\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%.2f\t%.2f\n",s[i].roll,s[i].name,s[i].total,s[i].per);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number: ");
                scanf("%d",&roll);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("\nRecord Found\n");
                        printf("Roll number :%d\n",s[i].roll);
                        printf("Name:%s\n",s[i].name);
                        printf("Subject 1:%f\n",s[i].m1);
                        printf("Subject 2:%f\n",s[i].m2);
                        printf("Subject 3:%f\n",s[i].m3);
                        printf("Total:%f\n",s[i].total);
                        printf("Percentage:%f\n",s[i].per);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Record not found.");
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