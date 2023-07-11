#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insertElement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }

        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    return tree;
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

int isIdentical(struct node *root1, struct node *root2)
{

    if (root1 == NULL && root2 == NULL)
        return 1;

    else if (root1 == NULL || root2 == NULL)
        return 0;
    else
    {

        if (root1->data == root2->data && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right))
            return 1;
        else
            return 0;
    }
}

int main()
{
    int choice, data;
    struct node *root1 = NULL;
    struct node *root2 = NULL;

    do
    {
        printf("\n 1.Insert data in 1st tree");
        printf("\n 2.Insert data in 2nd tree");
        printf("\n 3.Check is both bsts are similar or not");
        printf("\n 4.Exit");
        printf("\nEnter choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &data);
            root1 = insertElement(root1, data);
            break;
        case 2:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &data);
            root2 = insertElement(root2, data);
            break;
        case 3:
            if (isIdentical(root1, root2))
                printf("Both BSTs are identical");
            else
                printf("BSTs are not identical");
            break;
        }
    } while (choice != 4);

    return 0;
}