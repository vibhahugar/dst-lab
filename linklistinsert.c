#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct Node *link;
};
typedef struct NODE Node;
Node *start=NULL,*new,*curr;
void create();
void display();
void insert_beg();
void insert_end();
void insert_pos();
void main()
{

    int choice;
    while(1)
  {
      printf("\n 1.CREATE\n 2.DISPLAY\n 3.INSERT at the beginning\n 4.INSERT at the end\n 5.INSERT at given position \n 6.EXIT\n");
      printf("\n Enter your choice \n");
      scanf("%d",&choice);
      switch(choice)
      {


      case 1:create();
            break;
     case 2:display();
            break;
     case 3:insert_beg();
            break;
     case 4:insert_end();
            break;
     case 5:insert_pos();
            break;
     case 6:exit(0);
            break;
     default:printf("\n Invalid choice \n");
        }
}
getch();
}

void create()
{
    int choice;
    Node *new, *curr;
    start = (Node*)malloc(sizeof(Node));
    curr = start;
    printf("Enter element:\n");
    scanf("%d", &start->data);
    while(1)
    {
        printf("Do you want to add an element? Enter 0 for no\n");
        scanf("%d", &choice);
        if(choice!=0)
        {
            new = (Node*)malloc(sizeof(Node));
            printf("Please enter element:\n");
            scanf("%d", &new->data);
            curr->link = new;
            curr = new;
        }
        else
        {
            curr->link=NULL;
            break;
        }
    }
}


void display()
{
    Node *temp;
    temp = start;
    if(start==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp= temp->link;
    }

}

void insert_beg()
{
new=(Node*)malloc(sizeof(Node));
printf("Enter element\n");
scanf("%d",&new->data);
if(start==NULL)
{
start=new;
new->link=NULL;
return;
}
new->link=start;
start=new;
}

void insert_end()
{
Node * temp;
new=(Node*)malloc(sizeof(Node));
printf("Enter element\n");
scanf("%d",&new->data);
if(start==NULL)
{
start=new;
new->link=NULL;
return;
}
temp=start;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
new->link=NULL;
}

void insert_pos()
{
Node * temp;
int pos,i=1;
new=(Node*)malloc(sizeof(Node));
printf("Enter element\n");
scanf("%d",&new->data);
printf("Enter pos\n");
scanf("%d",&pos);
if(pos==1)
{
new->link=start;
start=new;
return;
}
temp=start;
while(i<(pos-1)&&temp!=NULL)
{
temp=temp->link;
i++;
}
if(i==(pos-1))
{
new->link=temp->link;
temp->link=new;
return;
}
if(temp==NULL)
{
printf("Invalid position\n");
}

}
