#include <stdio.h>
#include <stdlib.h> 

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

int max(struct Node *p){
    int m = 0;
    while (p){
        if (p->data > m){
            m=p->data;
            
        }
        p=p->next;
    }
    return m;
}

void create(int A[],int n){
    struct Node *last,*t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int main(){
    int A[]={2,4,8,7};
    
    create(A,4);
    int m=max(first);
    printf("%d",m);
}