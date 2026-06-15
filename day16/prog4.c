#include <stdio.h>
int main()
{
    int n, found;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], finalarr[n];
    int size = 0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        found = 0;
        for(int j=0;j<size;j++)
        {
            if(arr[i] == finalarr[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            finalarr[size] = arr[i];
            size++;
        }
    }
    printf("Array after removing duplicates: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",finalarr[i]);
    }
    return 0;
}