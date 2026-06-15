#include <stdio.h>
int main()
{
    int n,count,maxc=0,maxel;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxc)
        {
            maxc = count;
            maxel = arr[i];
        }
    }
    printf("Element with maximum frequency: %d\n", maxel);
    printf("Frequency: %d\n", maxc);
    return 0;
}