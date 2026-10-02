#include <stdio.h>
#include<stdlib.h>
struct node *
{
    struct node *prev;
    int data;
    struct node *next;
}*head;
int delete(struct node **head)
{
    struct node *head,*prev,*temp=head;
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        if (head->data==val)
        {
            free(head);
            head=NULL;
        }   
    }
    else
    {
        for(;temp->next!=NULL;temp=temp->next)
        {
            if(temp->data==val)
            {
                temp->prev->next=temp->prev;
                temp->next->prev=temp->next;
                free(temp);
            }
        } 
    }
}
int main()
{
    int i,n ;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of node %d",i);
        scanf("%d",&newnode->data);
    }
    
}
