#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;
    s=(char*)malloc(10);
    scanf("%s",s);
    printf("%s",s);

    return 0;
}