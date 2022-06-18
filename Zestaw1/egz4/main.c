#include <stdio.h>
#include <stdlib.h>

struct element{
    float x;
    struct element * next;
};

void fuuj(struct element *p)
{
    if(p == NULL)
    {
        printf("KURWACHUJ");
        return;
    }
    p = p->next;
    printf("%p",p);
    while(p->next!=NULL)
        p = p->next;
    printf("%p",p);
}

int main()
{
    struct element *p = malloc(sizeof(struct element));
    struct element *q = malloc(sizeof(struct element));
    struct element *r = malloc(sizeof(struct element));
    struct element *s = malloc(sizeof(struct element));
    p->x = 2;
    q->x = 4;
    r->x = 6;
    s->x = 8;

    p->next = q;
    q->next = r;
    r->next = s;
    s->next = NULL;
    fuuj(p);
    return 0;
}
