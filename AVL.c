#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
    int height;
};

struct node *createTree()
{
    char x;
    struct node *nnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data ,(Enter 'z' for Exit): ");
    scanf(" %c", &x);
    nnode->data = x;
    if (x == 'z')
    {
        free(nnode);
        return NULL;
    }
    else
    {
        nnode->data = x;
        printf("Enter left child of %c\n", x);
        nnode->left = createTree();

        printf("Enter right child of %c\n", x);
        nnode->right = createTree();
        nnode->height=1;
    }
    return nnode;
}

int height(struct node *N)
{
    if (N == NULL)
    {
        return 0;
    }
    else
    {
        return N->height;
    }
}
void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf(" %c", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    struct node *N;
    struct node *root;
    root = 0;
    root = createTree();
    preOrder(root);

    return 0;
}
