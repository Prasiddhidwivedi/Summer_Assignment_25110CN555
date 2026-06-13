#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];
    for(int i=0; i<n-1;i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    printf("Array after left rotation: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}