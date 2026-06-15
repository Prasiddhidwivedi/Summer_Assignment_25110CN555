#include <stdio.h>
int main() 
{
    int n, actualSum, missnum, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter the elements of array ");
    for(int i =0;i<n-1;i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    actualSum = n*(n+1)/2;
    missnum = actualSum - sum;
    printf("Missing number is: %d\n", missnum);
    return 0;
}