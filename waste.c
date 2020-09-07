#include <stdio.h>
    extern int x ;
    static int x;
int foo()
{
printf("x %d\n", x);
return 0;
}
int main()
{
foo();
return 0;
}

