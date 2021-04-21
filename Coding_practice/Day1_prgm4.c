#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a=0,*b=0;
    a= (int *)malloc(sizeof(int));
    b= (int *)malloc(sizeof(int));
    scanf("%d%d",a,b);
    printf("%d",(*a+*b));
}
