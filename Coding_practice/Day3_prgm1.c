#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The factors of the number are\n");
    for(i=2;i<=n;i++)
    {
        if((n%i)==0)
        {
            printf("%d\t", i);
        }
    }
}
