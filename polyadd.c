#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int co;
    int p;
    struct node *next;
};
struct node *createnode(int co,int p)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->co=co;
    newnode->p=p;
    newnode->next=NULL;
    return newnode;
}
struct node *insert(struct node *head,int co,int p)
{
    struct node *newnode,*temp;
    if(co==0)
        return head;
    newnode=createnode(co,p);
    if(head==NULL)
    {
        return newnode;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
struct node *add(struct node *p1,struct node *p2)
{
    struct node *result=NULL;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->p==p2->p)
        {
            result=insert(result,p1->co+p2->co,p1->p);
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->p>p2->p)
        {
            result=insert(result,p1->co,p1->p);
            p1=p1->next;
        }
        else
        {
            result=insert(result,p2->co,p2->p);
            p2=p2->next;
        }  
    }
    while (p1!=NULL)
    {
        result=insert(result,p1->co,p1->p);
        p1=p1->next;
    }
    while (p2!=NULL)
    {
        result= insert(result,p2->co,p2->p);
    }
    return result;
}
void display(struct node *head)
{
    struct node *temp=head;
    int first=1;
    while(temp!=NULL)
    {
        if(temp->co!=0)
        {
            if(!first&&temp->co>0)
                printf("+");
            if(temp->p==0)
                printf("%d",temp->co);

            else if(temp->p==1)
                printf("%dx",temp->co);
            else
                printf("%dx^%d",temp->co,temp->p);
            first=0;
        }
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *poly1=NULL,*poly2=NULL,*result=NULL;
    int maxp,i,co;
    printf("for polynomial 1\n");
    printf("ENETR THE MAXIMUM POWER OF X\n");
    scanf("%d",&maxp);
    for(i=maxp;i>=0;i--)
    {
        printf("enter the coefficient of degree %d: ",i);
        scanf("%d",&co);
        poly1=insert(poly1,co,i);
    }
    printf("for polynomial 2\n");
    printf("ENETR THE MAXIMUM POWER OF X\n");
    scanf("%d",&maxp);
    for(i=maxp;i>=0;i--)
    {
        printf("enter the coefficient of degree %d: ",i);
        scanf("%d",&co);
        poly2=insert(poly2,co,i);
    }
    result=add(poly1,poly2);
    printf("\nSUM: ");
    display(result);
    return 0;
}


