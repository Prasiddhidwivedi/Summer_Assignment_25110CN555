#include <stdio.h>
int main()
{
    int arr[100],n,key;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements in sorted manner : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    int low=0,high=n-1,mid,found=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }
    return 0;
}