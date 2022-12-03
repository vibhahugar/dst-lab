#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;

    for(;;)		
    {
        
        
        printf("1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n Enter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    printf("Queue is full");
                    getch();	
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    arr[R]=n;
                    te=te+1;
                }
                break;

            case 2:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();	
                }
                else
                {
                    printf("Number Deleted = %d",arr[F]);
                    F=(F+1)%size;
                    te=te-1;
                    getch();	
                }
                break;

            case 3:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();	
                }
                else
                {
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        printf("%d ",arr[x]);
                        x=(x+1)%size;
                    }
                    getch();	
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Wrong Choice");
                getch();	
        }
    }
    return 0;
}
