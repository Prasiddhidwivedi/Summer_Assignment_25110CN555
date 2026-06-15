#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:", sum);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d, %d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}