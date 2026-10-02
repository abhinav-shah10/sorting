#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
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
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            t=NULL;
            for(t=head;t->next!=NULL;t=t->next);
            t->next=newnode;
        }
    }
    return 0;

}
int insert()
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    printf("enter the value of node\n");
    scanf("%d",&new_node->data);
    int p;
    printf("enter the position where node is to be inserted \n");
    scanf("%d",&p);

    if(head==NULL)
    {
        head=new_node;
    }
    else 
    {
        struct node *t=NULL;
        int i=1;
        for(t=head;i<p-1;t=t->next,++i);
        struct node *t1=t->next;
        t->next=new_node;
        new_node->next=t1;
    }
    return 0;
}
int delete()
{
    struct node *t=head,*temp=NULL;
    int p,i;
    printf("enter the position of node to delete \n");
    scanf("%d",&p);
    if(head=NULL)
    {
        free(head);
        head=NULL;
    }
    else 
    {
        for(;t->next!=NULL;t=t->next,temp=t);
        free(temp->next);
        temp->next=NULL;
    }
    return 0;
}
int count()
{
    int ctr=0;
    struct node *t=head;
    for(t=head;t!=NULL;t=t->next)
    {
        ctr++;
    }
    printf("total number of nodes %d\n",ctr);
    return 0;
}
int traverse()
{
    struct node *t=head;
    if(head==NULL)
    {
        printf("no node found \n");
    }
    else
    {
        for(;t->next!=NULL;t=t->next)
        {
            printf("%d",&t->data);
        }
    }
    return 0;  
}
int search()
{
    int a,pos=1;
    struct node *t=head;
    printf("enter element to be searched\n");
    scanf("%d",&a);
    for(;t!=NULL;t=t->next)
    {
        if(t->data==a)
        {
            printf("element found at node %d\n",pos);
        }
        pos++;

    }
    printf("element not found \n");
    return 0;
}
int sort()
{
    struct node *i,*j;
    int t;
    if(head==NULL)
    {
        printf("NO NODE FOUND \n");
        return 0;
    }
    for (i=head;i->next!=NULL;i=i->next)
    {
        for (j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                t=i->data;
                i->data=j->data;
                j->data=t;

            }
        }
    }
    printf("list sorted");
    return 0;
}
int main()
{
    int ch;
    create();
    do
    {
        printf("MENU\n");
        printf("1.INSERT THE NODE AT POSITION\t2.DELETE THE NODE FROM ANY POSITION\t3.COUNT\t4.TRAVERSE\t5.SEARCH\t6.SORT\t7.EXIT\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                count();
                break;
            }
            case 4:
            {
                traverse();
                break;
            }
            case 5:
            {
                search();
                break;
            }
            case 6:
            {
                sort();
                break;
            }
            case 7:
            {
                printf("program exited");
            }
        }
    }
    while(ch!=7);
    return 0;
}