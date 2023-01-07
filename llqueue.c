#include<stdio.h>
#include<conio.h>
struct NODE
{
int data;
struct node *link;
};
  typedef struct NODE node;
  node *new,*front,*rear,*temp;

void insert()
{
new=(node*)malloc(sizeof(node));
printf("Enter the element to be inserted");
scanf("%d",&new->data);
if(front==NULL)
{
  rear=new;
  front=new;
  new->link=NULL;
  return;
}
temp=rear;
while(temp->link!=NULL)
{
  temp=temp->link;
}
  temp->link=new;
  new->link=NULL;
}
void delete()
{
  if(front==NULL)
{
printf("Queue is empty");
return;
}
  temp=front;
  front=front->link;
  free(temp);
}
void display()
{
if(front==NULL)
{
  printf("Queue is empty");
  return;
}
temp=front;
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
    printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
    while(1)
    {
        printf("Enter choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert();
                break;
            case 2: delete();
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
