#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;
struct Node *last=NULL;

struct Node * delete(struct Node *p,int key){
    
    
    struct Node *q=NULL;
    while(p->data != key){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    
    return first;
    
}
void create(int a[],int n){
    struct Node *t;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i < n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}

int main(){
    struct Node *b;
    int a[5]={1,3,4,6,8};
    create(a,0);
    
    int x=6;
    
    // p=add_beg(first,x);
    b=delete(first,x);
    printf("hi");
    while(b!=NULL){
        printf("%d\n",b->data);
        b=b->next;
    }
}