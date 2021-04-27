#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void accept(char *s,char *r)
{
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",r);
    int n=strlen(s),m=strlen(r),i,j;
    int c[20]={0};
    if(n!=m)
    {
        printf("Not an anagram\n");
        exit(0);
    }
    for(i=0;s[i]!='\0';i++)
    {
        int flag=0;
        for(j=0;r[j]!='\0';j++)
        {
            if(r[j]==s[i])
            {
                flag=1;
                if(c[j]==1 && j==(n-1))
                {
                    printf("Not an anagram\n");
                    exit(0);
                }
                else if(c[j]==1)
                {
                    continue;
                }
                else
                {
                    c[j]=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("Not an anagram\n");
            exit(0);
        }
    }
    printf("Its an anagram\n");
}
int main()
{
    char s[20],r[20];
    accept(s,r);
    return 0;
}