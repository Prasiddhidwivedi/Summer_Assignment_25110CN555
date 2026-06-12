#include <stdio.h>
int main()
{
    int n, max, secmax;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    secmax = arr[0];
    for(int j = 1; j < n; j++)
    {
        if(arr[j] > max)
        {
            secmax = max;
            max = arr[j];
        }
        else if(arr[j] > secmax && arr[j] != max)
        {
            secmax = arr[j];
        }
    }
    printf("The second largest element of the array = %d", secmax);
    return 0;
}