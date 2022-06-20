#include <stdio.h>
#include <stdlib.h>

int foo1(int x)
{
    return x+1;
}

int foo(int(*x)(int), int n)
{
    return x(n)%5;
}

int main()
{
    printf("%d\n",foo(foo1,8));
    return 0;
}
