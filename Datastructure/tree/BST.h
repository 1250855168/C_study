#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>


// #define int Element





typedef struct Treenode
{
    int data;
    struct Treenode *left;
    struct Treenode *right;
} Treenode;




// /**
//  * @brief 创建一个BST树
//  * 
//  * @return BST* 
//  */
// BST*creat_BST();
/**
 * @brief 插入一个二叉排序树
 * 
 */
struct Treenode *Insert_BST(struct Treenode *root, int data);

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

/**
 * @brief 找左子树的最大值
 * 
 * @param root 
 * @return Element 
 */
int Maxleft_BST(struct Treenode *root);
/**
 * @brief 删除一个树的结点
 * 
 */
struct Treenode *Delete_BST(struct Treenode *root, int data);

#endif