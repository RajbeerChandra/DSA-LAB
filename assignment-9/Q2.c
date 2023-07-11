#include<stdio.h>
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
void preOrder(struct node *tree)
{
    if(tree!=NULL)
    {
        printf("%d",tree->data);
        preOrder(tree->left);
        preOrder(tree->right);
    }
}
void postOrder(struct node *tree)
{
    if(tree!=NULL)
    {
        postOrder(tree->left);
        postOrder(tree->right);
        printf("%d",tree->data);
    }
}
int main()
{
     int option, val;
    struct node *ptr;
    create_tree(tree);
    do
    {
        printf("1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Postorder Traversal");
        printf("\nEnter your option");
        scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("\n Enter the value of the new node : ");
        scanf("%d", &val);
        tree = insert_Element(tree, val);
        break;

        case 2:
        printf("\n The elements of the tree are : \n");
        preOrder(tree);
        break;

        case 3:
        printf("\n The elements of the tree are : \n");
        postOrder(tree);
        break;
    }
    }while(option!=4);
    return 0;
}