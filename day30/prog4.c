#include <stdio.h>
int rollno[100],m1[100],m2[100],m3[100],n=0;
char name[100][50];
void addStud()
{
    printf("Enter Roll Number: ");
    scanf("%d",&rollno[n]);
    printf("Enter Name: ");
    scanf("%s",name[n]);
    printf("Enter Marks in first Subject : ");
    scanf("%d",&m1[n]);
    printf("Enter Marks in second Subject : ");
    scanf("%d",&m2[n]);
    printf("Enter Marks in third Subject : ");
    scanf("%d",&m3[n]);
    n++;
    printf("Record Added Successfully!");
}
void percentage()
{
    int i,searchroll,found=0,total;
    float per;
    printf("Enter Roll Number: ");
    scanf("%d",&searchroll);
    for(i=0;i<n;i++)
    {
        if(rollno[i]==searchroll)
        {
            total=m1[i]+m2[i]+m3[i];
            per=total/3.0;
            printf("\nStudent Found\n");
            printf("Roll Number:%d\n",rollno[i]);
            printf("Name:%s\n",name[i]);
            printf("Percentage:%.2f\n",per);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Record not found.\n");
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.To Add Student\n");
        printf("2.To Calculate Percentage\n");
        printf("3.To Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStud();
                break;
            case 2:
                percentage();
                break;
            case 3:
                printf("Terminating the program");
                return 0;
            default:
                printf("Invalid Choice!");
        }
    }
    return 0;
}