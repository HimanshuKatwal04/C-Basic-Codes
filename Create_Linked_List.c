//WAP to create a user defined linked list and traverse and print the data of each node

#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 	}*head,*temp,*newnode;
 	
 void main()
 {
 	void create();
 	create();
    void traverse();
    traverse();
 }
 
 void create()
 {
     char ch;
 	do
 	{	
 		
 		newnode=(struct node *)malloc(sizeof(struct node));
 		printf("Enter the data in the node\n");
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
 		printf("Enter y/n for newnode\n");
 		scanf("%s",&ch);
 	}while(ch=='y'||ch=='Y');
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
