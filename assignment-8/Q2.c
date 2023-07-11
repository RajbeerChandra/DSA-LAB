#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *rear=NULL;
struct node *front=NULL;

void enqueue()
{
	int num;
	struct node *t;
	
	t=(struct node*)malloc(sizeof(struct node*));
	if(t==NULL)
	printf("Queue overflow");
	else
	{
	printf("Enter the number to be inserted:");
	scanf("%d",&num);
	t->data=num;
	t->next=NULL;
	if(front==NULL)
	{
		rear=front=t;
	}
	else
	{
		rear->next=t;
		rear=rear->next;
	}
	}
}

int dequeue()
{
	int x=-1;
	struct node *p;
	if(front==NULL)
	{
		printf("Queue underflow");
	}
	else
	{
		x=front->data;
		front=front->next;
	}
	return x;
}

void display()
{
	struct node *p=front;
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
		
	}printf("\n");
	}
}

int main()
{
	int option;
	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				enqueue();
				break;
			
			case 2:
				printf("%d was deleted",dequeue());
				printf("\n");
				break;
				
			case 3:
				display();
				break;
				
			default:
				printf("Invalid input!");
					
		}
	}while(option!=4);
}