#include <stdio.h>
#include <stdlib.h>

struct node
{
    int marks;
    char name[30];
    struct node *link;
}*stnode;

void createNodeList(int n);
void displayList();
int main()
{
    int n;
		printf("\n\n Linked List : To create and display marks of students :\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Marks entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int marks, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input marks for student 1 : \n");
        scanf("%d", &marks);
       // printf("Input name of student 1: ");
        //scanf("%s", name);
        stnode->marks = marks;
       //stnode->name= name;
        stnode->link = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input marks for student %d :\n ", i);
                scanf(" %d", &marks);
                //printf("Enter name of student %d :",i)
                //scanf("%s", name);

                fnNode->marks = marks;
                //fnNode->name=name;
                fnNode->link = NULL;

                tmp->link = fnNode;
                tmp = tmp->link;
            }
        }
    }
}

    void sortList()
    {
        struct node *current = stnode, *index = NULL;
        int temp;

        if(stnode == NULL) {
            return;
        }
        else {
            while(current != NULL) {

                index = current->link;

                while(index != NULL) {

                    if(current->marks > index->marks) {
                        temp = current->marks;
                        current->marks = index->marks;
                        index->marks = temp;
                    }
                    index = index->link;
                }
                current = current->link;
            }
        }
    }

void displayList()
{
    struct node *tmp;
    int j=1;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        sortList();
        tmp = stnode;
        while(tmp != NULL)
        {
            if(tmp->marks >=40){
           // printf("Name of student %d is %s\n",j,tmp->name)
            printf(" Marks of student %d = %d\n",j, tmp->marks);
            printf("Student %d has passed\n", j);
            j++;
            }
            else
            {
             // printf("Name of student %d is %s\n",j,tmp->name)
               printf(" Marks of student %d = %d\n",j, tmp->marks);
            printf("Student %d has failed\n", j);
            j++;
            }
              tmp = tmp->link;
        }
    }

}
