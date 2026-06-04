#include <stdio.h>
int main()
 {
    int  binary;
    int decimal = 0, b = 1, rem;
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    while (binary > 0) 
    {
        rem = binary % 10;
        decimal = decimal + rem * b;
        b = b * 2;
        binary = binary / 10;
    }
    printf("Decimal value = %d", decimal);
    return 0;
}