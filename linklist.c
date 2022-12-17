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
void main()
{

    int choice;
    while(1)
  {
      printf("\n 1.CREATE\n 2.DISPLAY\n 3.EXIT\n");
      printf("\n Enter your choice \n");
      scanf("%d",&choice);
      switch(choice)
      {


      case 1:create();
            break;
     case 2:display();
            break;
     case 3:exit(0);
            break;
     default:printf("\n Invalid choice \n");
        }
}
getch();
}
void create()
{
char ch;
    start=(Node*)malloc(sizeof(Node));
    curr=start;
    printf("\n Enter element\n");
    scanf("%d",&start->data);
    while(1)
    {

        printf(" \n Do you want to add another elements (Y/N) \n");
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
        {

            new=(Node*)malloc(sizeof(Node));
            printf(" \n Enter element\n");
            scanf("%d",&new->data);
            curr->link=new;
            new=curr;
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
    if(start==NULL)
    {

        printf(" \n Linked list is empty\n");
        return;
    }
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
