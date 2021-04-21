#include <stdio.h>

void accept(int *a,int*b)
{  
    scanf("%d%d",a,b);
}
void cal(int a,int b, int *sum)
{
    *sum=a+b;
}
void display(int sum)
{
    printf("%d",sum);
}
int main()
{
    int a,b,sum;
    accept(&a,&b);
    cal(a,b,&sum);
    display(sum);
}