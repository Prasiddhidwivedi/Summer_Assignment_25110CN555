#include <stdio.h>
int main() 
{
    int n , sum=0; float avg;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum / n;
    printf("The sum of the elements of the array = %d \n",sum);
    printf("The average of the elements of the array = %f",avg);
    return 0;
}
