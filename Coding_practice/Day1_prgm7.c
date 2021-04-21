#include <stdio.h>

struct add{
    int a,b,sum;
    
};
typedef struct add ad;
void accept(ad *s)
{  
    scanf("%d%d",&s->a,&s->b);
}
void cal(ad *s)
{
    s->sum=s->a+s->b;
}
void display(ad s)
{
    printf("%d",s.sum);
}
int main()
{
    ad s;
    accept(&s);
    cal(&s);
    display(s);
    
}
