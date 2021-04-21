#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i=-1;
    printf("Enter integer value\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a[++i]=n%10;
        n=n/10;
    }
    while(i>=0)
    {
        printf("%d\n",a[i--]);
    }

}
