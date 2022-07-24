#include <stdio.h>
#include <stdlib.h>
#include "Cirarrayqueue.h"

typedef struct Treenode
{
    int data;
    struct Treenode *left;
    struct Treenode *right;
} Treenode;
/**
 * @brief 中序遍历
 *
 * @param root
 */
void Midordertraverse(struct Treenode *root);

/**
 * @brief 先序遍历
 *
 * @param root
 */
void Preordertraverse(struct Treenode *root);

/**
 * @brief 后序遍历
 *
 * @param root
 * @return voir
 */
void Lastordertraverse(struct Treenode *root);
/**
 * @brief 层次遍历
 *
 */
void LevelorderTraverse(struct Treenode *root);

int main()
{

    return 0;
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
        Midordertraverse(temp->left);
        Midordertraverse(temp->right);
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
        printf("%d\n", temp->data);
        Midordertraverse(temp->right);
        Midordertraverse(temp->left);
    }
    return;
}

void LevelorderTraverse(struct Treenode *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Cirarrayqueue queue;
        Init_Cirarrayqueue(&queue);
        struct Treenode *temp = root;
        push_Cirarrayqueue(&queue, temp->data);
        while (!Isempt_Cirarrayqueue(&queue))
        {
            int t = front_Cirarrayqueue(&queue);
            printf("%d\n", t);
            Pop_Cirarrayqueue(&queue);
            if (temp->left != NULL)
            {
                push_Cirarrayqueue(&queue, temp->left->data);
            }
            if (temp->right != NULL)
            {
                push_Cirarrayqueue(&queue, temp->right->data);
            }
        }
    }
}