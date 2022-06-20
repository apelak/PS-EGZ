#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int silnia(int n)
{
    int licznik = 1;
    for(int i=1;i<=n;i++)
        licznik *= i;
    return licznik;
}

float suma(unsigned int n, float x)
{
    if(x<0)
        return 0;
    float licznik = 1;
    for(int i = 1; i<=n;i++)
    {
        licznik += (pow(x,i)/silnia(i));
    }
    return licznik;
}

int main()
{
    printf("%f\n",suma(2,2));
    printf("%f\n",suma(3,2));
    printf("%f\n",suma(4,2));
    return 0;
}
