#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;
struct Node *last = NULL;

struct Node * duplicates(struct Node *p)
{

    struct Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {       
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            
            q = p->next;
        }
        
    }
    return first;
}

void create(int a[], int n)
{
    struct Node *t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int main()
{
    struct Node *X;
    int a[] = {1, 2, 2, 6, 6, 8};
    create(a, 6);

    // p=add_beg(first,x);
    X = duplicates(first);
    while (X != NULL)
    {
        printf("%d\n", X->data);
        X = X->next;
    }
}