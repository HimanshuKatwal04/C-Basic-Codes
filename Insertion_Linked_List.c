//WAP to create three nodes of a linked list and then add a fourth node at the beginning of the list and then traverse and print the data of each node

#include<stdio.h>
#include<stdlib.h>

//DEclaring the node
struct Node{
    int data;
    struct Node *next;
};


//Function to insert node at beginning
struct Node *insert(struct Node *head,int data)
{
   struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
   ptr->data=data;
    return ptr;
}
//Function to traverse the list
void traverse_and_print_(struct Node *ptr)
{
    printf("The data and link are as folowed\n");
    while(ptr!=0){
        printf("%d , %d\n",ptr->data,ptr->next);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
   
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
   
    head->data=5;
    head->next=second;
   
    second->data=10;
    second->next=third;
   
    third->data=15;
    third->next=NULL;
    
    head=insert(head,56);
    traverse_and_print_(head);
    return 0;
}
