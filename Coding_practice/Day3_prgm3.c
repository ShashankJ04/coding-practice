#include <stdio.h>

int squaresum(int a)
{
    int b=0;
    while(a!=0)
    {
        b=b+(a%10)*(a%10);
        a=a/10;
    }
    return b;
}
int main()
{
    int num,sum;
    printf("Enter the num\n");
    scanf("%d",&num);
    sum = squaresum(num);
    while(sum!=1 && sum!=4)
    {
        sum=squaresum(sum);
    }
    if(sum==1)
    {
        printf("Happy no");
    }
    else 
    {
        printf("Not a happy no");
    }
    
}