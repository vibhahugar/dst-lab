#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,f=0,r=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(r==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[r++]);
            }
            break;
        case 2:
            if(f==r)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[f++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(f==r)
                printf("\n Queue is Empty");
            else
            {
                for(i=f; i<r; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}
