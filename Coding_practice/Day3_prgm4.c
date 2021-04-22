#include <stdio.h>
#include <math.h>

int pronic(int n)
{
    int i=1,sum,f=0;
    while(i<=sqrt(n)+1)
    {
        sum=i*(i+1);
        if(sum==n)
        {
            f=1;
            break;
        }
        i++;
    }
    return f;
}
int main()
{
    int n,prod=0;
    scanf("%d",&n);
    pronic(n)?printf("Pronic"):printf("Not pronic");
}