#include <stdio.h>
int main() 
{
    int n ,num,found=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found : ");
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==num)
        {
           found=1; 
           printf("The number is found at %d index ",j);
           break;
        }
    }
    if(found==0)
    {
        printf("Number not found ");
    }
    return 0;
}