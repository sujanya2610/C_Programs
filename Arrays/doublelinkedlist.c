/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

Node* createNode(int newdata);
void displayNode(Node* node);
Node* insertNodeatfirst(Node* head,int data);
Node *deleteNode(Node* head);
Node *deleteNodeatlast(Node* head);
int main()
{
    Node* first=createNode(10);
    Node* second=createNode(11);
    Node* third=createNode(12);
    
    first->next=second;
    second->next=third;
    
 first=insertNodeatfirst(first,9);
 first=insertNodeatfirst(first,8);

 Node* test=deleteNodeatlast(first);
    displayNode(test);
    
    
}
Node* createNode(int newdata)
{
    Node* newNode= (Node*)malloc(sizeof(Node));
    
    newNode->data=newdata;
    newNode->next=NULL;
    newNode->prev=NULL;
    
    return newNode;
}

Node* insertNodeatfirst(Node* head,int data)
{
    Node *firstNode=(Node*)malloc(sizeof(Node));
    firstNode=createNode(data);
    firstNode->next=head;
    
    return firstNode;
}

void displayNode(Node* node)
{
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
}

Node *deleteNode(Node* head)
{
    if(head==NULL)
    return head;
    
    Node* temp=head;
    
    head=head->next;
    
    if(head!=NULL)
     head->prev=NULL;
     
     free(temp);
     return head;
}

Node *deleteNodeatlast(Node* head)
{
    
    if(head==NULL)
     return NULL;
     if (head->next == NULL) 
	 {
        free(head);
        return NULL;
    }
    
    Node *last= head;
    
    while(last->next!=NULL)
      last=last->next;
     
    last->prev->next=NULL;
    
     free(last);
     
     return head;
}


