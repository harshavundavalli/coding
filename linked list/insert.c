#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;
struct Node *last=NULL;


struct Node *add_beg(struct Node *first,int n){
    struct Node *node;
    node=(struct Node *)malloc(sizeof(struct Node));
    node->data=n;
    node->next=first;
    first=node;

    return first;
}

struct Node * add_last(struct Node *last,int n){
    struct Node *node;
    node=(struct Node *)malloc(sizeof(struct Node));
    node->data=n;
    last->next=node;
    node->next=NULL;
    last=node;

    return first;
}

struct Node * add_pos(struct Node *first,int n,int z){
    struct Node *node;
    node=(struct Node *)malloc(sizeof(struct Node));
    node->data=n;
    struct Node *p=first;
    
   
        for(int i=1;i<z;i++){
            p=p->next;
         }
        node->next=p->next;
        p->next=node;
    
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
    int a[5]={1,4,2,6,8};
    create(a,5);
    int x=3;
    int pos=4;
    // p=add_beg(first,x);
    p=add_pos(first,x,pos);
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}