#include <stdio.h>
struct Studentinfo
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
    struct Studentinfo s[500];
    int choice, n = 0, i, roll, found;
    while (1) 
    {
        printf("1.To Add Student\n");
        printf("2.To Display Students\n");
        printf("3.To Search Student\n");
        printf("4.To Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);
             printf("Enter Name: ");
            scanf("%s", s[n].name);
             printf("Enter Marks: ");
             scanf("%f", &s[n].marks);
            n++;
            printf("Record Added Successfully!");
            break;
            case 2:
            if (n == 0) 
            {
                 printf("Record not found.");
            } 
            else
            {
                printf("\nRoll Number\tName\tMarks\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%f\n", s[i].roll,s[i].name,s[i].marks);
                }
            }
            break;
            case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                 {
                    printf("\nStudent Found\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
                printf("Record not found.");
            break;
            case 4:
                printf("Terminating the program ");
                return 0;
            default:
                printf("Invalid Choice!");
        }
    }
    return 0;
}