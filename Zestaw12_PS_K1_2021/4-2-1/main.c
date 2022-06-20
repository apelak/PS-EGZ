#include <stdio.h>
#include <stdlib.h>

void fooa(unsigned int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        tab[i]=0;
    }
}

void foob(unsigned int n, int tab[n])
{
    for(int i =0;i<n;i++)
        tab[i]=i;
}

void fooc(unsigned int n, int tab[n])
{
    for(int i =0;i<n;i++)
        tab[i]*=2;
}
void food(unsigned int n, int tab[n])
{
    for(int i =0;i<n;i++)
        if(tab[i]<0)
            tab[i]*=-1;
}

int main()
{
    int tab[] = {1,2,3,4,5};
    fooa(5, tab);
    for(int i = 0; i<5;i++)
        printf("%d\n", tab[i]);

    foob(5, tab);
    for(int i = 0; i<5;i++)
        printf("%d\n", tab[i]);

    fooc(5, tab);
    for(int i = 0; i<5;i++)
        printf("%d\n", tab[i]);

    food(5, tab);
    for(int i = 0; i<5;i++)
        printf("%d\n", tab[i]);
    return 0;
}
