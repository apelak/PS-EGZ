#include <stdio.h>
#include <stdlib.h>

char *foo(char *napis1, char *napis2)
{
    *napis1 = *napis2;
    return napis1;
}

int main()
{
    char *n1 = "kutas";
    char *n2 = "kozla";
    printf("%p\n",foo(&n1,&n2));
    return 0;
}

