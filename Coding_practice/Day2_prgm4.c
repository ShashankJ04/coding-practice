#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter integer value");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not a prime\n");
            exit(0);
        }
    }
    printf("It is prime\n");

}
