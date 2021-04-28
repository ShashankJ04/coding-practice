#include <stdio.h>
#include <stdlib.h>
void count(char *s)
{   
    
    gets(s);
    int n=strlen(s),i,cnt=0;
    for(i=0;i<=n;i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
int main()
{
    char s[20];
    count(s);

    return 0;
}
