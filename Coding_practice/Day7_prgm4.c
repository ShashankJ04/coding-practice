#include <stdio.h>

int main()
{
    char s[60];
    int max=0,min=1000,val;
    printf("Enter the sequence\n");
    for(;;)
    {
        scanf("%s",s);
        val=atoi(s);
        if(val>max)
        {
            max=val;
        }
        if(val!=0)
        {
            if(val<=min)
            {
                min=val;
            }
        }
        
        if(s[0]=='d' && s[1]=='o' && s[2]=='n' && s[3]=='e')
        {
            break;
        }
        
    }
    printf("Maximum is %d and minimum is %d",max,min);
}
