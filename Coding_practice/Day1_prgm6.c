#include <stdio.h>

struct add{
    int a,b;
    
};
typedef struct add ad;
int main()
{
    ad s;
    scanf("%d%d",&s.a,&s.b);
    printf("%d",(s.a+s.b));
    
}
