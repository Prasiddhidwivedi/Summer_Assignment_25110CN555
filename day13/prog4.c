#include <stdio.h>
int main() 
{
    int n , odd=0, even=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
           even++;
        }
        else
        {
           odd++;
        }
    }
    
    printf("The number of even elements of the array = %d \n",even);
    printf("The number of odd elements of the array = %d",odd);
    return 0;
}
