
#include <stdio.h>
#include <stdlib.h>

void insert();
void display();

int main()
{
    int n;
    printf("1. Insert\n2. Display\n3. Exit");
    do{
        printf("\nEnter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            break;
            default:
            printf("Invalid Choice");
        }
    } while(n!=3);
    
    return 0;

}
typedef struct node{
    int data;
    struct node *next;
}n1;
n1 *head=NULL;

void insert()
{
    int item;
    
    n1 *new_node;
    new_node=(n1 *)malloc(sizeof(n1));
    printf("Enter item");
    scanf("%d",&item);
    new_node->data=item;
    if(head==NULL)
    {
        head=new_node;
        head->next=NULL;
    }
    else{
        n1 *q;
        q=head;
        while(q->next!=null)
        {
        	q=q->next_node;
        	;
		}
		q->next=new_node;
		
    }
    
}
void display()
{
    n1 *temp;
    
    if(head==NULL){
        printf("list is empty");
    }
    
    else{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
    
}