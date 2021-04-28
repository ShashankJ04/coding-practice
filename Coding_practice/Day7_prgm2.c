# include <stdio.h>

void main()
{
    int j=0,n,a[27]={0};
    char s[40];
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>96)
        {
            a[(int)s[i]-97]++;
        }
        else if(s[i]>64)
        {
            a[(int)s[i]-65]++;
        }
        else
        {
            a[26]++;
        }
    }
    for(int i=0;i<27;i++)
    {
        if(j<a[i])
        {
            j=a[i];
            n=i;
        }
    }
    printf("Max occured char %c : %d times\n",(char)(n+65),j);
}