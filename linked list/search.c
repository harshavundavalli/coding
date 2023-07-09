#include <stdio.h> 

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;


struct Node * search(struct Node *p,int key){
    while (p != NULL)
    {
        if(p->data==key){
            return p;
        }
        p=p->next;
    }
    return NULL;
    
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
    int a[5]={1,4,2,6,8};
    create(a,5);
    struct Node *temp;
    temp=search(first,6);
    printf("%d",temp->next->data);
}