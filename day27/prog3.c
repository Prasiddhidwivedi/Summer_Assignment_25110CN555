#include <stdio.h>
struct Salarymanagement
{
    char name[50];
    int id;
    float salary;
};
int main()
{
    struct Salarymanagement s[100];
    int choice=0,n=0,i,id,found;
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
                printf("Enter Employee ID: ");
                scanf("%d",&s[n].id);
                printf("Enter Employee Name: ");
                scanf("%s",s[n].name);
                printf("Enter Salary: ");
                scanf("%f",&s[n].salary);
                n++;
                printf("Salary Record Added .");
                break;
            case 2:
                if(n==0)
                {
                    printf("Record not found");
                }
                else
                {
                    printf("\nID\tName\tSalary\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%f\n",s[i].id,s[i].name,s[i].salary);
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].id==id)
                    {
                        printf("\nRecord Found\n");
                        printf("ID:%d\n",s[i].id);
                        printf("Name:%s\n",s[i].name);
                        printf("Salary:%f\n",s[i].salary);
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