#include <stdio.h>
int main()
{
    int n1,n2,found,size=0;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter the elements of first array ");
    for(int i=0;i<n1;i++)
    {
       scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of second array ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[n1<n2?n1:n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found=0;
                for(int k=0;k<size;k++)
                {
                    if(arr1[i]==arr3[k])
                    {
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    arr3[size]=arr1[i];
                    size++;
                }
            }
        }
    }
    printf("Intersection of arrays: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}