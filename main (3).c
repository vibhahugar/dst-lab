/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
// Node creation
struct node
{
int info;
struct node *link;
};
typedef struct node *NODE;
// Insert node at the rear end
NODE insertRear(NODE head)
{
NODE temp,cur;
int item;
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return head;
}
printf("\nEnter an element to be pushed: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
if(head->info == 0)
{
head->link = temp;
head->info++;
}
else
{
cur=head->link;
while(cur->link!=NULL)
cur=cur->link;
cur->link=temp;
head->info++;
}
return head;
}
// Delete node from the rear end
NODE deleteRear(NODE head)
{
NODE cur,prev;
if(head->info == 0)
{
printf("\nThe list is empty.. no elements to delete...\n");
return head;
}
if(head->link->link == NULL)
{
cur=head->link;
printf("\nElement being popped is : %d\n", cur->info);
free(cur);
head->info--;
head->link = NULL;
return head;
}
cur=head->link;
while(cur->link!=NULL)
{
prev=cur;
cur=cur->link;
}
prev->link=NULL;
head->info--;
if(head->info== 0)
head->link = NULL;
printf("\nElement being popped is : %d\n", cur->info);
free(cur);
return head;
}
// Display the contents of the linked list
void display(NODE head)
{
NODE cur;
if(head->info == 0)
printf("\nList is empty, no elements to display\n");
else
{
cur=head->link;
printf("\nElements in the linked list are : ");
while(cur!=NULL)
{
printf("%d\t",cur->info);
cur=cur->link;
}
}
}
void main()
{
NODE head = NULL;
int choice;
head = (NODE)malloc(sizeof(struct node));
head->info = 0;
head->link = NULL;
printf("\n********* Stack implementation using SLL *********\n");
while(1)
{
printf("\n1. Push\n2. pop\n3. Display\n4. Exit\n");
printf("\n---------------\n");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: head = insertRear(head);
break;
case 2: head = deleteRear(head);
break;
case 3: display(head);
break;
case 4: printf("\n Program exits now...\n");
exit(0);
default: printf("\nInvalid choice... Please enter valid choice...\n");
}
}
}

