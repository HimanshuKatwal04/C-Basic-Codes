//WAP to create three nodes of a linked list and traverse and print the data of each node

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traverse_and_print_(struct Node *ptr)
{
    printf("The data and link are as folowed\n");
    while(ptr!=0){
        printf("%d , %d\n",ptr->data,ptr->next);
        ptr=ptr->next;
    }
}

struct Node *insert(struct node *head,int data)
{
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    head=ptr;
    return head;
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
    
    
   
     traverse_and_print_(head);
     int data=3;
     head=insert(head,data);
     return 0;
}
