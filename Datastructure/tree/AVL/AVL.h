#ifndef AVL_H
#define AVL_H

#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;

typedef struct AVL
{
    Elemtype data;
    struct AVL *left;
    struct AVL *right;
    struct AVL *parent;
    int height;
} AVL;

/**
 * @brief 插入一个AVL
 *
 */
struct AVL *Insert_AVL(struct AVL **root, Elemtype data);

/**
 * @brief 中序遍历
 *
 * @param root
 */
void Midordertraverse(const struct AVL *root);

/**
 * @brief 直接拿出树的高度
 * 
 * @param root 
 * @return int 
 */
int Get_Height(struct AVL *root);
/**
 * @brief 求高度
 *
 * @param root
 * @return int
 */
int Height(struct AVL *root);

/**
 * @brief 求左树的最大值
 *
 * @param root
 * @return int
 */
int Max_Left(struct AVL *root);

/**
 * @brief 删除一个树的结点
 *
 */
struct AVL *Delete_AVL(struct AVL *root, Elemtype data);

/**
 * @brief 左转
 *
 */
void Turn_left(struct AVL **root) ;

/**
 * @brief 右转
 *
 * @param root
 */
void Turn_right(struct AVL **root);

/**
 * @brief 计算结点是否平衡
 *
 * @param root
 */
struct AVL * Blance_Is(struct AVL *root);

/**
 * @brief 实现平衡
 *
 * @param root
 * @return struct AVL*
 */
struct AVL *Achieve_Blance(struct AVL *root);
#endif