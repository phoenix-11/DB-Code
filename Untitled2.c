#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *link;
};
struct node *root=NULL;

void createLinkedList()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   int i=1;
   while(i==1)
   {
      if(root==NULL)
      {
         root=temp;
         struct node *p;
         p=(struct node*)malloc(sizeof(struct node));
         printf("Enter node data\n");
         scanf("%d",&p->data);
         p->link=NULL;
         root=p;
         temp=root;
      }
      else
      {
         struct node *p;
         p=(struct node*)malloc(sizeof(struct node));
         printf("Enter node data\n");
         scanf("%d",&p->data);
         p->link=NULL;
         temp->link=p;
         temp=p;
      }
      i--;
      printf("Want to continue 1 or 0");
      scanf("%d",&i);
   }
}

void addatbeg()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("ENter node beg data\n");
   scanf("%d",&temp->data);
   temp->link=root;
   root=temp;
}

void addatpos(int pos)
{
   struct node *temp;
   int i=0;
   temp=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(temp!=NULL)
   {
      i++;
      temp=temp->link;
      if(i==pos)
      {
         struct node *p;
         p=(struct node*)malloc(sizeof(struct node));
         printf("ENter pos node data\n");
         scanf("%d",&p->data);
         p->link=temp->link;
         temp->link=p;
      }
   }
}

void addatend()
{
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   p=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(temp->link!=NULL)
   {
      temp=temp->link;
   }
   printf("Enter node data at end\n");
   scanf("%d",&p->data);
   temp->link=p;
   p->link=NULL;
}

void traversal()
{
   struct node *temp;
   temp=root;
   if(temp!=NULL)
   {
      printf("\nThe content in the list are\n");
      while(temp!=NULL)
      {
         printf("%d  ",temp->data);
         temp=temp->link;
      }
   }
   else
   {
      printf("Linked list is empty\n");
   }
}

int main()
{
   createLinkedList();
   addatbeg();
   addatpos(2);
   addatend();
   traversal();
}
