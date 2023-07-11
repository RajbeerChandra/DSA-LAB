#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;    
    struct node *next; 
}*head;
void insertNodeAtBeginning(int data);
void displayList();
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 
                temp->next = newNode; 
                temp = temp->next; 
        }
    }    
void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data; 
        newNode->next = NULL; 
        temp = head;
        while(temp != NULL && temp->next != NULL)
        temp = temp->next;
        temp->next = newNode; 
    }
void displayList()
{
    struct node *temp;
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;  
}
}
int main()
{
    int n, data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();
    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);
    printf("\nData in the list \n");
    displayList();
    return 0;
}
