#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL,*last=NULL;

void Display(struct Node *p){
    while (p != NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
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

void Reverse(struct Node *p){
    struct Node *q=NULL;
    struct Node *r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }   
    first=q; 
}

int main(){
    
    int a[5]={1,4,2,6,8};
    create(a,5); 
    Reverse(first);
    Display(first);
    
}