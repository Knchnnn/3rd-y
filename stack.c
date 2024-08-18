#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int push(int [] , int);
int pop(int [], int);
int isfull(int);
int isempty(int);
void display(int[], int );
void peek(int[] , int);

int push(int stack [MAX], int top) {
int element;
if(isfull(top))
{
printf("stack is full\n");
return top;
}
else{
    printf("enter element to push:");
    scanf("%d",&element);
top++;
stack[top]=element;
return top;
}
}

int pop(int stack [MAX], int top) {
    if(isempty(top)){
        printf("stack is empty\n");
        return top;
    }
    else{
        int ele=stack[top];
    top=top-1;
    return top;
    }
}

void peek(int stack[MAX],int top){
if (isempty(top)) {
    printf("stack is empty\n");
}
else{
    printf("%d\n", stack [top]);
}
}

int isempty(int top)
{
if(top==-1){ 
    return 1;
}
else{
return 0;
}
}

int isfull(int top){
if(top==MAX-1){
    return 1;
    }
else {
    return 0;
}
}

void display(int stack[MAX], int top){
    if (isempty(top)){
        printf("stack is empty\n");
    }
else{
    printf("stack:\n");
    for(int i=top;i>=0;--i)
{
    printf("%d\n", stack[i]);
}
}
}

int main()
{
    int choice, top=-1, stack[MAX];
    char ch;
    do{
        printf("enter operation:\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.CHECK FULL\n6.CHECK EMPTY\n");
        scanf("%d",&choice); 
        switch(choice)
        {
            case 1:
            top=push(stack, top);
            break;
            case 2:
            top=pop(stack,top);
            break;
            case 3:
            display(stack, top);
            break;
            case 4:
            peek(stack, top);
            break;
            case 5: 
            if(isfull(top)){
                printf("stack is full\n");
            }
            else{
                printf("stack is not full\n");
            }
            break;
            case 6:
            if(isempty(top)){
                printf("stack is empty\n");
            }
            else{
                printf("stack is not empty\n");
            }
            break;
            case 7:
            default:
            printf("invalid choice\n");
            break;
        }
        printf("do you want to continue: Y OR N\n");
        scanf(" %c",&ch);
    }
    while(ch=='Y'||ch=='y');
    return 0;
}
