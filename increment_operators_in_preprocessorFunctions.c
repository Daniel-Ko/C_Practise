#include <stdio.h>
#define f(x) x*x

int main()
{
    int x = 0;
    
    //0 (x->1) * 1 = 0, (x->2)
    int post = f(x++);
    printf("After postincrements, x = %d\n", x); //x = 2
    x = 0;
    
    int norm = f(x); //x = 0
    printf("After a normal call,  x = %d\n", x);
    
    //(x->1) 1 * (x->2) ..this has the effect of making 2 * 2, I think??
    int pre = f(++x);
    printf("After preincrements,  x = %d\n", x); //x = 2
    
    
    printf("%d, %d, %d\n", post, norm, pre); //0, 0, 4
}

