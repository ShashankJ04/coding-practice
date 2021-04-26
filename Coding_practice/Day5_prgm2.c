#include <stdio.h>
#include <stdlib.h>
void accept(char *s)
{
    scanf("%s",s);
}
void print(char *s)
{
    printf("%s",s);
}
int main()
{
    char *s;
    s=(char*)malloc(10);
    accept(s);
    print(s);

    return 0;
}
