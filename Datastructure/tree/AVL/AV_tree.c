#include "AVL.h"

struct AVL *Insert_AVL(struct AVL *root, Elemtype data)
{
    if (root == NULL)
    {
        struct AVL *root = malloc(sizeof(AVL));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (data > root->data)
    {
        root->right = Insert_AVL(root->right, data);
        root->right->parent = root;
    }
    if (data < root->data)
    {
        root->left = Insert_AVL(root->left, data);
        root->left->parent = root;
    }
    return root;
}

void Midordertraverse(const struct AVL *root)
{
    if (root == NULL)
    {
        return;
    }
    Midordertraverse(root->left);
    printf("%d\n", root->data);
    Midordertraverse(root->right);
}

int Height(struct AVL *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int L = Height(root->left);
    int R = Height(root->right);
    return (L > R ? L : R) + 1;
}

int Max_Left(struct AVL *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

struct AVL *Delete_AVL(struct AVL *root, Elemtype data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data > root->data)
    {
        root->right = Delete_AVL(root->right, data);
        if (root->right != NULL)
        {
            root->right->parent = root;
        }
    }
     else if (data < root->data)
    {
        root->left = Delete_AVL(root->left, data);
        if (root->left != NULL)
        {
            root->left->parent = root;
        }
    }
     else if (root->left == NULL)
    {
        AVL *temp = root->right;
        free(root);
        root = NULL;
        return temp;
    }
    else if (root->right = NULL)
    {
        AVL *temp = root->left;
        free(root);
        root = NULL;
        return temp;
    }
    else
    {
        Elemtype temp = Max_Left(root->left);
        root->data = temp;
        root->left = Delete_AVL(root, temp);
    }
    return root;
}