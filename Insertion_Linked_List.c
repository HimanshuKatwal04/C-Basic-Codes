//WAP to create a user defined linked list and then insert a node  

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *next;
       };
       struct node *head,*temp,*newnode;
       void main()
       {
              void create();
              create();
              void traverse();
              void insert_at_first();
              insert_at_first();
              traverse();
              void insert_at_last();
              insert_at_last();
              traverse();
              void insert_in_between();
              insert_in_between();
              traverse();
        }
        void create()
        {
              char choice;
               do
              {
              newnode=(struct node*)malloc(sizeof(struct node));
              printf("Enter the data in node\n");
              scanf("%d",&newnode->data);
              newnode->next=NULL;
             
                 if(head==NULL)
                     {
                            head=newnode;
                            temp=newnode;
                      }
                      else
                      {
                            temp->next=newnode;
                            temp=newnode;
                       }
                printf("Enter your choice\n");
                scanf("%s",&choice);
              }while(choice=='y');
           }
           
           void traverse()
           {
              temp=head;
              while(temp!=0)
              {
                printf("%d\n",temp->data);
                temp=temp->next;
              }
          }

          void insert_at_first()
          {
          struct node *newnode=(struct node*)malloc(sizeof(struct node));
          printf("Enter the element to insert\n");
          scanf("%d",&newnode->data);
          newnode->next=head;
          head=newnode;
          }
         
          void insert_at_last()
          {
          //struct node *temp=head;
          struct node *newnode=(struct node*)malloc(sizeof(struct node));
          printf("Enter the element to insert\n");
          scanf("%d",&newnode->data);
          struct node *temp=head;
          while (temp->next!=NULL)
              {      
                temp=temp->next;
              }
          newnode->next=NULL;
          temp->next=newnode;
          }

          void insert_in_between()
          {
          int pos;
          struct node *newnode=(struct node*)malloc(sizeof(struct node));
          printf("Enter the element to insert\n");
          scanf("%d",&newnode->data);
          printf("Enter the position  ");
          scanf("%d",&pos);
          temp=head;
          for(int x=1;x<pos;x++)
            {
              temp=temp->next;
              if(x=pos-1)
                  {
                      temp->next=newnode;
                  }
              newnode->next=temp;
              temp->next=newnode;
            }
          }
