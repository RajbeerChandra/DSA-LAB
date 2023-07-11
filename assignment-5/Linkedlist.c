#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *new_node,*ptr;
    int num;
    printf("Enter no.",num);
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=NULL;
    printf("%d",new_node->data);
    return 0;
}