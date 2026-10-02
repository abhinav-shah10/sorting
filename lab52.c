#include<stdio.h>
#include <stdlib.h>
struct node 
{
    int data ;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
int create()
{
    int n,i,v;
    struct node *newnode,*t;
    printf("enter the  number of nodes \n");
    scanf("%d",&n);
    
    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&v);
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=v;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            t=NULL;
            for(t=head;t->next!=NULL;t=t->next);
            t->next=newnode;
            newnode->prev=t;
        }
    }
    return 0;

}
void insertfront()
{
    int value;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=head;
    if(head==NULL)
    {
        head->prev=newnode;
    }
    head=newnode;
    printf("node inserted at front\n");
}
void insertlast()
{
    int value;
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the value to be inserted\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next);
        newnode->prev=temp;
    }
    printf("node inserted at last\n");
}
void insertpos()
{
    int value,pos,i;
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the value \n");
    scanf("%d",&value);
    printf("enter the position of node\n");
    scanf("%d",&pos);
    newnode->data=value;
    if(pos<=0)
    {
        printf("invalid position\n");
        return;
    }
    if(pos==1)
    {
        insertfront();
        return;
    }
    else
    {
        temp=head;
        for(i=1;i<pos-1&&temp!=NULL;temp=temp->next,i++);
        if(temp==NULL)
        {
            printf("invalid position\n");
            return;
        }
        else
        {
            newnode->next=temp->next;
            newnode->prev=temp;
        }
    }
    printf("element insert at the position\n");
}
void deletefront()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("deletion not possible\n");
        return;
    }
    temp=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
    else
    {
        free(temp);
    }
    printf("node deleted at front\n");
}
void deletelast()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("deletion not possible\n");
        return;
    }
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    if(temp->prev!=NULL)
    {
        temp->prev->next=NULL;
    }
    else
    {
        head=NULL;
    }
    free(temp);
    printf("node deleted from last\n");
}
void deletepos()
{
    int i,pos;
    struct node *temp;
    if(head==NULL)
    {
        printf("deletion not possible\n");
        return;
    }
    printf("enetr the position\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position\n");
        return;
    }
    temp=head;
    for(i=1;i<pos&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid position");
        return;
    }
    if(temp->prev!=NULL)
    {
        temp->prev->next=temp->next;
    }
    else
    {
        head=temp->next;
    }
    free(temp);
    printf("node delted from position\n");
}
void deletevalue()
{
    int value;
    struct node *temp;
    if(head==NULL)
    {
        printf("deletion not possible\n");
        return;
    }
    printf("enter the value to be deleted\n");
    scanf("%d",&value);
    temp=head;
    while(temp!=NULL&&temp->data!=value)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("value not found in list\n");
        return ;
    }
    if(temp->prev!=NULL)
    {
        temp->prev->next=temp->next;
    }
    else
    {
        head=temp->next;
    }
    free(temp);
    printf("value deleted\n");
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("listy empty");
        return;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i,ch;
    create();
    do
    {
        printf("*****MENU*****\n");
        printf("1.INSERT AT FIRST\n2.INSERT AT LAST\n3.INSERT AT POSITION\n4.DELETE AT FIRST\n5.DELETE AT LAST\n6.DLETE AT POSITION\n7.DELETE AT VALUE\n");
        printf("8.exit\n");
        printf("enetr your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insertfront();
                break;
            case 2:
                insertlast();
                break;
            case 3:
                insertpos();
                break;
            case 4:
                deletefront();
                break;
            case 5:
                deletelast();
                break;
            case 6:
                deletepos();
                break;
            case 7:
                deletevalue();
                break;
            case 8:
            {
            
                display();
                printf("program exited!");
                break;
            }
         }
    }
    while(ch<=1);
    return 0;
}

