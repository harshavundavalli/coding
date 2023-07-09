#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;
struct Node *last=NULL;

struct Node * add_sorted(struct Node *first,int n){
    struct Node *node;
    node=(struct Node *)malloc(sizeof(struct Node));
    node->data=n;
    struct Node *p=first;
    struct Node *q=NULL;
    if(p==NULL){
        p=node;
    }
    else{
        while(node->data>p->data){
            q=p;
            p=p->next;
        }
        node->next=p;
        q->next=node;
    }
    
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
    struct Node *p,*q;
    int a[5]={1,3,4,6,8};
    create(a,0);
    int x=7;
    
    // p=add_beg(first,x);
    p=add_sorted(first,x);
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}