#include <stdio.h>

int main()
{
    int n,a,i=0;
    int binary[8];
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%2;
        binary[i++]=a;
        n=n/2;
    }
    printf("Binary is\n");
    for(--i;i>=0;i--)
    {
        printf("%d",binary[i]);
    }
    
}