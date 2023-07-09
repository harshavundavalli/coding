
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=top;
    top=t;
}

char pop(){
    struct Node *t=top;
    char x=t->data;
    top=t->next;
    return x;
}



int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 0;
    else
        return 1;
}

int pre(char a){
    if(a=='+'||a=='-')
        return 1;
    else if(a=='*'||a=='/')
        return 2;
    return 0;    
}

char *intopostfix(char *infix){
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc((len+1)*sizeof(char));
    int i,j;
    i=j=0;
    while(infix[i] != '\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(pre(infix[i])>pre(top->data)){
                push(infix[i]);
		i++;
            }
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top != NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char *infix="a+b*c";
    
    char *postfix=intopostfix(infix);
    
    printf("%s ",postfix);
}
