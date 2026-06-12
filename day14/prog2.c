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
    printf("Enter the number whos frequency has to be found : ");
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==num)
        {
           freq++;
        }
    }
    if(freq==0)
    {
        printf("Number not found ");
    }
    else
    {
        printf("The number appeared %d times in the array ",freq);
    }
    return 0;
}