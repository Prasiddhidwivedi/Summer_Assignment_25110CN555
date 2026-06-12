#include <stdio.h>
int main() 
{
    int n ,num,freq=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}