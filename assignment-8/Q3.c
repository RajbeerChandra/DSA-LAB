#include <stdio.h>
#include<stdlib.h>  
#define max 6  

int queue[max];   
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%max;     
        queue[rear]=element;    
    }  
}  
  

int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is empty\n");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe deleted element is %d", queue[front]);  
   front=(front+1)%max;  
}  
}  

void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
        printf("\n");
    }  
}  

void peek(){
	if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty\n");  
    }  
    else  
    { 
    printf("\n Queue's first element:%d", queue[front]);
    }
}

void isEmpty(){
		if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty\n");  
    }  
    else  
    { 
    printf("\n Queue is not empty");
    }
}

void isFull(){
	if((rear == max-1 && front == 0) || (rear == front-1)){
		printf("Circular Queue is full");
	}
	else{
		printf("Circular Queue is not full");
	}
}

int main()  
{  
    int choice=1,x;   
      
    while(choice<4 && choice!=0)   
    {  
 	printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Peek at the Queue\n");
        printf("5.Check if the Queue is empty\n");
        printf("6.Check if the Queue is full\n");
        printf("7.Exit\n");  
    printf("\nEnter your choice");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
        printf("Enter the element which is to be inserted");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        case 3:  
        display();
        break;  
        case 4:  
        peek();
		break;  
        case 5:  
        isEmpty();
        break;
        case 6:  
        isFull();
        case 7:  
        exit(0);
    }
  }  
    return 0;  
} 
