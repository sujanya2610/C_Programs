	
#include <stdio.h>
#include<stdlib.h>

typedef struct Qnode
{
    int data;
    struct Qnode *next;
    
}Qnode;

typedef struct Queue 
{
    Qnode *front;
    Qnode *rear;
}Queue;

Queue* createqueue()
{
    Queue* q = (Queue *)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(Queue* q, int newdata)
{
  Qnode* qnode=(Qnode *)malloc(sizeof(Qnode));
  qnode->data=newdata;
  qnode->next=NULL;
  
  if(q->rear==NULL)
  {
      q->rear=q->front=qnode;
  
      return;
  }
    q->rear->next=qnode;
    q->rear=qnode;
}

int dequeue(Queue* q)
{
    if(q->front==NULL)
    {
        printf("Empty");
        return -1;
    }
    int value=q->front->data;
    Qnode *temp=q->front;
    q->front=q->front->next;
    
    free(temp);
    return value;
}

void display_queue(Queue* q)
{
    Qnode *temp=q->front;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
    
        temp=temp->next;
    }

    printf("NULL");
}

int main()
{
    
	Queue *q=createqueue();
	enqueue(q,12);
	enqueue(q,13);
	enqueue(q,14);
	enqueue(q,15);
	display_queue(q);
	int value=dequeue(q);
	display_queue(q);
	return 0;
}
