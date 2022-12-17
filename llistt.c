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
      printf("\n 1.CREATE\n 2.DISPLAY\n 3.DELETE at the beginning\n 4.DELETE at the end\n 5.DELETE a given element \n 6.EXIT\n");
      printf("\n Enter your choice \n");
      scanf("%d",&choice);
      switch(choice)
      {


      case 1:create();
            break;
     case 2:display();
            break;
     case 3:delete_beg();
            break;
     case 4:delete_end();
            break;
     case 5:delete_ele();
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

void delete_beg()
{
    Node * temp;
    if(start==NULL)
    {
    printf("Linked list is empty");
    }
    else
    {
    temp=start;
    start=start->link;
    free(temp);
    }
}

void delete_end()
{
    Node *prev,*next;
    if(start==NULL)
    {
        printf("Linked list is empty");
        return;
    }
    if(start->link==NULL)
    {
        free(start);
        start=NULL;
        return;
    }
    prev=start;
    next=prev->link;
    while(next->link!=NULL)
    {
        prev=next;
        next=next->link;
    }
    prev->link=NULL;
    free(next);
}
void delete_ele()
{
    Node *prev,*next;
    int ele;
    if(start==NULL)
    {
        printf("\n Linked list is empty\n");
        return;
    }
    printf("Enter the element\n");
    scanf("%d",&ele);
    if(start->data==ele)
    {
        free(start);
        start=NULL;
        printf("\n Element deleted");
        return;
    }
    prev=start;
    next=start->link;
    while(next->data!=ele&&next!=NULL)
    {
        prev=next;
        next=next->link;
    }
    if(next->data==ele)
    {
        prev->link=next->link;
        free(next);
        return;
    }
    printf("Element not found\n");
}
