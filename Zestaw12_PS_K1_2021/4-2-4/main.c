#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo(unsigned int n, unsigned int tab[n])
{
    int suma = 1;
    for(int i = 0;i<n;i++)
    {
        suma*=tab[i];
    }
    double x = pow(suma,(1.0/n));
    return x;
}

int main()
{
    unsigned int tab[]={2,2,5,7};
    printf("%.2lf\n",foo(4,tab));
    return 0;
}
