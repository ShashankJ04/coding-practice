#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,flag;
    printf("Enter integer value");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        flag=1;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d\t",j);
        }
    }
    

}

