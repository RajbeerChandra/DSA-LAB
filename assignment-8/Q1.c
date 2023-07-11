#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void enqueue();
void dequeue();
void show();
void peek();
void isEmpty();
void isFull();
int Queue[SIZE];
int rear=-1,front=-1;
int main()
{
    int ch;
    do
    {
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Peek \n ");
        printf("5. Check is Empty \n");
        printf("6. Check is Full \n");
        printf("Enter your Choice\n");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        show();
        break;
        case 4:
        peek();
        break;
        case 5:
        isEmpty();
        break;
        case 6:
        isFull();
        break;

}
    } while (ch!=7);
}
void enqueue()
{
    int insert;
    if(rear==SIZE-1)
    printf("Overflow");
    else
    {
        if(rear==front==-1)
        front==0;
        printf("Element to be inserted");
        scanf("%d",insert);
        rear=rear+1;
        Queue[rear]=insert;
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Underflow");
        return;
    }
    else{
        printf("Element deleted in queue",Queue[front]);
        front=front -1;

    }
}
void show()
{
    if (front==-1)
    printf("Empty Queue");
    else
    {
        printf("Queue\n");
        for(int i=front;i<=rear;i++)
        printf("%d",Queue[i]);
    }
}
void peek()
{
    if(front==-1)
    printf("Empty Queue");
    else{
    printf("Queue's First Element");
    printf("%d",Queue[front]);
    }
}
void isEmpty()
{
    if((front==-1 && rear==-1)||front>rear)
    printf("Empty Queue");
    else
    printf("Queue not empty");
}
void isFull()
{
    if(rear==SIZE-1)
    printf("Queue is Full");
    else
    printf("Queue is not full");
}