#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo(unsigned int n)
{
    if(n>=3)
    {
        bool *tab = new bool[n+1];

        for(int i=2;i<n;i++)
            tab[i]
        for(int i = 2;i<sqrt(n);i++)
            for(int j=i*i; j<=n;j+=i)
                tab[j]=false;
    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
