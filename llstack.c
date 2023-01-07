#include<stdio.h>
#include<conio.h>
struct NODE
{
int data;
struct node *link;
};
typedef struct NODE node;
node *new,*top,*temp;
void push()
{
new=(node*)malloc(sizeof(node));
printf("Enter the element to be inserted");
scanf("%d",&new->data);
if(top==NULL)
{
top=new;
new->link=NULL;
return;
}
new->link=top;
top=new;
}
void pop()
{
if(top==NULL)
{
printf("Stack underflow");
return;
}
temp=top;
top=top->link;
free(temp);
}
void display()
{
if(top==NULL)
{
printf("Stack is empty");
return;
}
temp=top;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}
void main()
{
{
    int choice;
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(1)
    {
        printf("Enter choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4:exit(0);
            break;
            default:printf("Invalid choice\n");
        }
    }
    getch();
}
}
