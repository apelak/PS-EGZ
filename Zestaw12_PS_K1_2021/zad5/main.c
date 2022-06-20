#include <stdio.h>
#include <stdlib.h>

int porownaj(int tab1[], int tab2[])
{
    if(sizeof(tab1)/sizeof(int) != sizeof(tab2)/sizeof(int))
       return 0;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < sizeof(tab1)/sizeof(int); i++)
    {
        if(tab1[i]%2 == 0)
            sum1 += tab1[i];
        if(tab2[i]%2 == 0)
            sum2 += tab2[i];
    }
    if(sum1 != sum2)
        return 0;
    else
        return 1;
}

int main()
{
    int tab1[] = {3,2,4,5,4,2};
    int tab2[] = {3,3,4,5,5,2};
    printf("%d\n",porownaj(tab1,tab1));
    printf("%d\n",porownaj(tab1,tab2));
    return 0;
}
