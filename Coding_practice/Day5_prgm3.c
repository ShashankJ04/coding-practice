#include <stdio.h>
#include <stdlib.h>
void accept(char *s)
{
    gets(s);
}
void print(char *s)
{    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}
int main()
{
    char *s;
    s=(char*)malloc(20);
    accept(s);
    print(s);

    return 0;
}
