#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create_tree(struct node *tree)
{
    tree=NULL;
}
struct node *insert_Element(struct node*tree,int val)
{
    struct node *ptr,*nodeptr,*parentptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    if (tree==NULL)
    {
        tree=ptr;
        tree->left=NULL;
        tree->right=NULL;
    }
    else
    {
        parentptr=NULL;
        nodeptr=tree;
        while(nodeptr!=NULL)
        {
            parentptr=nodeptr;
            if(val<nodeptr->data)
            nodeptr->left=ptr;
            else
            nodeptr->right=ptr;
        }
        if(val<parentptr->data)
        parentptr->left=ptr;
        else
        parentptr->right=ptr;
    }
        return tree;
}
int totalNodes(struct node *tree)
{
    if(tree==NULL)
    return 0;
    else
    return(totalNodes(tree->left) + totalNodes(tree->right) + 1);
}
int main()
{
int option, val;
    struct node *ptr;
    create_tree(tree);
    do
    {
        printf("1. Insert Element");
        printf("\n 2. Largest Element");
        printf("\nEnter your option");
        scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("Enter the value");
        scanf("%d", &val);
        tree = insert_Element(tree, val);
        break;

        case 2:
        printf("\n Total no. of nodes = %d", totalNodes(tree));
        break;

    }
    }while(option!=3);
    return 0;
}