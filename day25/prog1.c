#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[200], a,b, i, j, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &a);
    printf("Enter elements of first sorted array: ");
    for(i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &b);
    printf("Enter elements of second sorted array: ");
    for(i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0;
    while(i < a && j < b)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while(i < a)
    {
        arr3[k++] = arr1[i++];
    }
    while(j < b)
    {
        arr3[k++] = arr2[j++];
    }
    printf("Merged array: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}