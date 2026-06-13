#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count]=0;
        count++;
    }
    printf("Array after moving zeroes to the end: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}