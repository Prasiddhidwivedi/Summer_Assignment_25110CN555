#include <stdio.h>
int main() 
{
    int n , max, min;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int j=0;j<n;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    
    printf("The largest element of the array = %d \n",max);
    printf("The smallest element of the array = %d",min);
    return 0;
}
