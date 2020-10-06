#include<stdio.h>
#include<stdlib.h>
# define MAX_SIZE 10
int stack[MAX_SIZE];
int top=-1;
void push(int data);
void pop();
void main()
{
    int choice,data;
    while(1){
    printf("Stack implementation program\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Exit\n");
    printf("\n Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:  
            printf("Enter data to push into stack:");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            printf("Poping from stack\n");
            pop();
            break;
        case 3:
            printf("exiting program\n");
            exit(0);
            break; 
        default:
            printf("invalid choice, please try again");       
    }
    printf("\n\n");}
}
void push(int data)
{
    if(top<MAX_SIZE)
    {
        int i;
        ++top;
        stack[top]= data;
        printf("Updated stack is\t");
        for(i=0;i<=top;i++)
            printf("%d  ",stack[i]);
        printf("\n\n");    
    }
    else
        printf("Stack Overflow");
}
void pop()
{
    if (top==-1)
        printf("Stack Underflow");
    else
    {
        int i,item;
        item=stack[top];
        --top;
        printf("Element poped is %d\n",item);
        printf("Updated stack is\t");
        for(i=0;i<=top;i++)
            printf("%d  ",stack[i]);
        printf("\n\n");    
    }
}
