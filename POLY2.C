#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int co;
    int p;
    struct node *next;
};
struct node *create(int co,int p)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->co=co;
    newnode->p=p;
    newnode->next=NULL;
    return newnode;

}
struct node *insert(int co,int p,struct node *head)
{
    struct node *newnode,*temp;
    if(co==0)
    {
        return head;
    }
    newnode=create(co,p);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
struct node *add(struct node *p1,struct node *p2)
{
    struct node *sum=NULL;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->p>p2->p)
        {
            sum=insert(sum,p1->co,p2->co);
            p1=p1->next;

        }
        else if(p1->p<p2->p)
        {
            sum=insert(sum,p2->co,p1->co);
            p2=p2->next;
        }
        else
        {
            sum=insert(sum,p1->co+p2->co,p2->p);
            p1=p1->next;
            p2=p2->next;

        }
    }
    while (p1 != NULL)
    {
        sum = insert(sum, p1->co, p1->p);
        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        sum = insert(sum, p2->co, p2->p);
        p2 = p2->next;
    }
    return sum;
}