#include <stdio.h>
#include <stdlib.h>
void accept(char *s)
{
    gets(s);
}
void print(char *s)
{    
    int n=strlen(s),i,cnt,p;
    for(i=cnt=0;i<=n;i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            for(p=i-1;p>=cnt;p--)
            {
                printf("%c",s[p]);
            }
            printf(" ");
            cnt=i+1;
        }
    }
}
int main()
{
    char s[20];
    accept(s);
    print(s);

    return 0;
}
