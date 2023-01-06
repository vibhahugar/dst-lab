#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node Node;
Node *top=NULL, *temp,*new;
void push();
int pop();
void display();
void main()
{
    int choice;
    while(1)
    {
        printf("1.PUSH 2.POP 3.DISPLAY 4.EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("\n Wrong choice\n");

        }
    }
    getch();
}
void push()
{
    int data;
    Node *new;
    new=(Node*) malloc(sizeof(Node));
    printf("Enter your element\n");
    scanf("%d",&new->data);
    if(top==NULL);
    {new->link=top;
        top=new;

        return;
    }
    new->link=top;
    top=new;
}
int pop()
{
    int temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    temp=top;
    top=top->link;
    free(temp);
}
void display()
{
    Node *temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}
