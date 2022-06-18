#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int suma = 0;
    for(int i =1;i<=n;i++)
        suma+=i*i*i;
    return suma;
}

int main()
{
    printf("%d\n",foo(5));
    return 0;
}
