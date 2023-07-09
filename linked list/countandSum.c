#include <stdio.h>
#include <stdlib.h> 

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
int sum(struct Node *p){
    int c=0;
    while(p != NULL){
        c+=p->data;
        p=p->next;
    }
    return c;
}


int count(struct Node *p){
    int c=0;
    while(p != NULL){
        c++;
        p=p->next;
    }
    return c;
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
    int n=count(first);
    printf("no of nodes are %d\n",n);

    int s=sum(first);
    printf("sum of the nodes is %d",s);
}