#include <stdio.h>
#include <stdlib.h>

int foo(int n,int*tab)
{
    int b=*(tab+1); //b=
    int c=b+=4; //b= ,c=
    c=*(++tab)-(b*=2); //b= ,c=
    return c+b;
}

int main()
{
    int tab[] = {1,2,-3,2,9,8,1};
    int *wsk=tab-1;
    int b = *(wsk+=3);
    int c = b+4;
    int d = foo(7,tab); // b= -3 , c= 1 , d= 2
    int e = (wsk+=-1)[2]; // b= -3 , c= 1 , d= 2 , e= 2
    e = (d += 5) + (c -= 2); // b= -3 , c= -1 , d= 7 , e= 6
    c = d - (b*=6); // b= -18 , c= 25 , d= 7 , e= 6
    b = *wsk + e; // b= 8 , c= 25 , d= 7 , e= 6
    return 0;
}
