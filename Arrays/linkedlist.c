/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextnode;
};

struct Node* createnode(int newdata);
void display(struct Node* node);
struct Node* insertnodeatfirst(struct Node* head,int newdata);
struct Node* insertnodeatlast(struct Node* head,int newdata);

int main()
{
    struct Node* head;
    struct Node* last;
    
    head=createnode(10);
    head->nextnode=createnode(11);
    head->nextnode->nextnode=createnode(12);
    head=insertnodeatlast(head,13);

    display(head);
    return 0;
}


struct Node* createnode(int newdata)
{
    struct Node *newNode= (struct Node *)malloc(sizeof(struct Node));
    
    newNode->data=newdata;
    newNode->nextnode=NULL;
    
	return newNode;
}

struct Node* insertnodeatfirst(struct Node* head,int newdata)
{
  
	struct Node* firstNode;

	firstNode=createnode(newdata);
	firstNode->nextnode=head;

	return head;
}

struct Node* insertnodeatlast(struct Node* head,int newdata)
{
  
  struct Node* lastNode;
  lastNode = createnode(newdata);
  
  struct Node* last =head;
  
  while(last->nextnode!=NULL)
    last=last->nextnode;
   
  last->nextnode=lastNode;
    return head;
	
}
void display(struct Node* node)
{
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->nextnode;
        printf("\n");
    }
    
}

struct Node* deletenodeatfirst(struct Node* head)
{
	struct Node* temp=head;
	head=head->nextnode;
	
	if(head==NULL)
		return NULL;
	if(head->nextnode=NULL)
		free(head);
	
	
}