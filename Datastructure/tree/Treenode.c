#include <stdio.h>
#include <stdlib.h>

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
        Midordertraverse(root->left);
        printf("%d\n", root->data);
        Midordertraverse(root->right);
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
        printf("%d\n", root->data);
        Midordertraverse(root->left);
        Midordertraverse(root->right);
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
        printf("%d\n", root->data);
        Midordertraverse(root->right);
        Midordertraverse(root->left);
    }
    return;
}


void LevelorderTraverse(struct Treenode *root)
{
    
}