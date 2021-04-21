#include <stdio.h>
#include <stdlib.h>

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
int allocate()
{
    int *p=(int *)malloc(sizeof(int));
    return p;
}
int main()
{
    int *a=0,*b=0,*sum=0;
    a=allocate();
    b=allocate();
    sum=allocate();
    accept(a,b);
    cal(*a,*b,sum);
    display(*sum);
}
