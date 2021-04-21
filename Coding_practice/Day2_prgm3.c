#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,e[10],o[10],i=-1,k=-1,d=-1;
    printf("Enter integer value\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a%2==0)
        {
            e[++k]=a;
        }
        else
        {
            o[++d]=a;
        }
        n=n/10;
    }
    printf("These are even\n");
    while(k>=0)
    {
        printf("%d\t",e[k--]);
    }
    printf("\n");
    printf("These re odd\n");
    while(d>=0)
    {
        printf("%d\t",o[d--]);
    }

}
