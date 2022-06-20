#include <stdio.h>
#include <stdlib.h>

int a(unsigned int n)
{
    if(n == 0)
        return 0;
    int x = (a(n-1)-n);
    if(x > 0)
        return (a(n-1)-n);
    else
        return (a(n-1)+n);
}

int main()
{
    printf("%d\n",a(1));
    printf("%d\n",a(2));
    printf("%d\n",a(3));
    printf("%d\n",a(4));
    printf("%d\n",a(5));
    printf("%d\n",a(6));
    printf("%d\n",a(7));
    return 0;
}
