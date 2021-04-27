#include <stdio.h>
#include <stdlib.h>
void accept(char *s)
{
    gets(s);
}
void print(char *s)
{    
    int n=strlen(s);
    for(int i=n;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
int main()
{
    char s[20];
    accept(s);
    print(s);

    return 0;
}