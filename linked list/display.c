#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

void Display(struct Node *p){
    while (p != NULL)
    {
        
        printf("%d ",p->data);
        p=p->next;
        
    }
    
}


int main(){
    struct Node *first;
    first=(struct Node *)malloc(sizeof(struct Node));
    int A[]={2,8,9,4,7};

    struct Node *t,*last;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<5;i++){
        t=(struct Node *)malloc(sizeof(struct Node));

        t->data=A[i];
        t->next=NULL;

        last->next=t;   
        last=t;

    }
    
    Display(first);



}