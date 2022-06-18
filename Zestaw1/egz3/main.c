#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int **tab)
{
    int max = tab[0][0];
    int min = tab[0][0];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(min>tab[i][j])
                min = tab[i][j];
            if(max<tab[i][j])
                max = tab[i][j];
        }
    return max-min;
}

int main()
{
    int **tab = malloc(sizeof(int*)*4);
    for(int i=0;i<4;i++)
    {
        tab[i]=malloc(sizeof(int)*4);
    }
    printf("%d\n",foo(4,4,tab));
    return 0;
}
