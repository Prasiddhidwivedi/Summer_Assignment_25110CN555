#include <stdio.h>
int prime(int n) 
{
    int count;
    for(int i=2;i<n;i++)
    {
      if (n%i==0)
    {
        count++;
    }
    }
     if (count==0)
    {
        printf(" Prime Number");
    }
    else
    {
     printf("Not a Prime Number");
    }
    
}
int main()
 {
    int x ;
    printf("Enter any number: ");
    scanf("%d", &x);
    prime(x);
    return 0;
}