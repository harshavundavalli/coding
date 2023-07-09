#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL,*second=NULL;

void Display(struct Node *p){
    while (p != NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void merge(struct Node *first,struct Node *second){
    struct Node *last=NULL;
    struct Node *third=NULL;
    
    if(first->data<second->data){
        last=third=first;
        first=first->next;
        last->next=NULL;
    }
    else{
        last=third=second;
        second=second->next;
        last->next=NULL;
    }
    while(first != NULL && second != NULL){
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
            
        }
        else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first!=NULL){
        last->next=first;
    }
    if(second!=NULL){
        last->next=second;
    }

    first=third;
}

void create_second(int a[],int n){
    struct Node *t,*last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=a[0];
    second->next=NULL;
    last=second;
    for (int i = 1; i < n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}


void create(int a[],int n){
    struct Node *t,*last;
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
    
    int a[]={1,4,6,8};
    create(a,4); 
    
    int b[]={2,7,9,11,12,14};
    create_second(b,6);

    merge(first,second);

    Display(first);
    
}