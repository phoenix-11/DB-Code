#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
struct node *root=NULL;

void sorting()
{
   struct node *temp,*ptr;
   int sum;
   temp=(struct node*)malloc(sizeof(struct node));
   ptr=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(temp->link!=NULL)
   {
      ptr=temp->link;
      while(ptr!=NULL)
      {
         if(ptr->data<temp->data)
         {
            sum=temp->data;
            temp->data=ptr->data;
            ptr->data=sum;
         }
         ptr=ptr->link;
      }
      temp=temp->link;
   }
}

void traversal()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
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
      struct node *temp,*p,*q;
      temp=(struct node*)malloc(sizeof(struct node));
      p=(struct node*)malloc(sizeof(struct node));
      q=(struct node*)malloc(sizeof(struct node));
      root=temp;
      temp->data=11;
      temp->link=p;
      p->data=33;
      p->link=q;
      q->data=22;
      q->link=NULL;
      sorting();
      traversal();
}
