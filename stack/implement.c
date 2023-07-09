#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};
void push(struct stack *st, int n)
{
    if (st->top == st->size - 1)
    {
        printf("we are sorry");
    }
    else
    {
        st->top++;
        st->s[st->top] = n;
    }
}
int peek(struct stack *st, int pos)
{
    int x = -1;
    if (st->top - pos + 1 < 0)
    {
        return -1;
    }
    else
    {
        return st->s[st->top - pos + 1];
    }
}
void create(struct stack *st)
{
    printf("enter size ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void Display(struct stack *st)
{
    int i;
    for (i = st->top; i >= 0; i--)
        printf("%d ", st->s[i]);
    printf("\n");
}
int main()
{
    struct stack *st;
    create(st);
    push(st, 2);
    push(st, 4);
    push(st, 6);

    int x = peek(st, 1);
    Display(st);
}