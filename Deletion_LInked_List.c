//WAP to create a list and delete nodes from the beginning,end and from specified position and printing the list again after each deletion

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
 	void delete_from_beginning();
 	delete_from_beginning();
 	traverse();traverse();
 	void delete_from_end();
 	delete_from_end();
 	traverse();
 	void delete_from_specific();
 	delete_from_specific();
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
              printf("The list is\n");
              temp=head;
              while(temp!=0)
              {
                printf("%d\n",temp->data);
                temp=temp->next;
              }
          }
 void delete_from_beginning()
 {
     printf("After deleting the first node\n");
     temp=head;
     head=head->next;
     free(temp);
 }
 
 void delete_from_end()
 {
     printf("After deleting the last node\n");
     struct node*prevnode;
     temp=head;
     while(temp->next!=NULL)
     {
         prevnode=temp;
         temp=temp->next;
     }
     if(temp==head)//checks if there is only one node in the list
     {
         head=0;//head is pointing to nothing
     }
     else
     {
         prevnode->next=NULL;
     }
     free(temp);
}

void delete_from_specific()
{
    int i=1,pos;
    temp=head;
    struct node *newnode;
    printf("Enter the position of node to be deleted\n");
    scanf("%d",&pos);
    printf("After deleting the %d node\n",pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=temp->next;
    temp->next=newnode->next;
    free(newnode);
}
 
 		
 	
