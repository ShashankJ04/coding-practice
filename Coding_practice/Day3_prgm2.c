#include <stdio.h>
#include<math.h>
int primeno(int num)
{
    int flag=1;
    for(int i=2;i<=sqrt(num);i++)
    {
        if ((num%i)==0)
            {
                flag=0;
                return flag;
            }
        flag=1;
    }
    
    return flag;
}
int main()
{
    int num,p;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("The prime factors are\n");
    for(int i=2;i<=num;i++)
    {
        if((num%i)==0)
        {
            p=primeno(i);
            if(p==1)
               printf("%d\t", i);
        }
    }
    
}
