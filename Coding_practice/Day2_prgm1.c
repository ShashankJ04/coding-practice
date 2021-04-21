#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter integer value");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        printf("%d",i);
        n=n/10;
    }

}
