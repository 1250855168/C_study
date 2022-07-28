
#include "BST.h"
#include"linkedlistqueue.h"


struct Treenode *Insert_BST(struct Treenode *root, Elemtype data)
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct Treenode));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (data > root->data)
    {
        root->right = Insert_BST(root->right, data);
    }
    if (data < root->data)
    {
        root->left = Insert_BST(root->left, data);
    }
    return root;
}

void Midordertraverse(struct Treenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        struct Treenode *temp = root;
        Midordertraverse(temp->left);
        printf("%d\n", temp->data);
        Midordertraverse(temp->right);
    }
}

void Preordertraverse(struct Treenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        struct Treenode *temp = root;
        printf("%d\n", temp->data);
        Preordertraverse(temp->left);
        Preordertraverse(temp->right);
    }
    return;
}

void Lastordertraverse(struct Treenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        struct Treenode *temp = root;
        Lastordertraverse(temp->right);
        Lastordertraverse(temp->left);
        printf("%d\n", temp->data);
    }
    return;
}

Elemtype Maxleft_BST(struct Treenode *root)
{
    struct Treenode *temp = root;
    while (temp != NULL && temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

struct Treenode *Delete_BST(struct Treenode *root, Elemtype data)
{

    if (root == NULL)
    {
        return root;
    }

    if (data > root->data)
    {
        root->right = Delete_BST(root->right, data);
    }

    else if (data < root->data)
    {
        root->left = Delete_BST(root->left, data);
    }
    else if (root->left == NULL)
    {
        struct Treenode *temp = root->right;
        free(root);
        root = NULL;
        return temp;
    }
    else if (root->right == NULL)
    {
        struct Treenode *temp = root->left;
        free(root);
        root = NULL;
        return temp;
    }
    else
    {
        Elemtype temp = Maxleft_BST(root->left);
        root->data = temp;
        root->left = Delete_BST(root, temp);
    }
    return root;
}

void LevelorderTraverse(struct Treenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        linkedlistqueue*queue= Init_queue();
        struct Treenode *temp = root;
        Push_linkedlistqueue(queue, temp);
        while (!Isempty_linkedlistqueue(queue))
        {
            Element t = front_linkedlistqueue(queue);
            printf("%d\n", t->data);
            Pop_linkedlistqueue(queue);
            if (t->left != NULL)
            {
                Push_linkedlistqueue(queue, t->left);
            }
            if (t->right != NULL)
            {
                Push_linkedlistqueue(queue, t->right);
            }
        }
    }
}