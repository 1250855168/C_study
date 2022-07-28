#if !defined(LINKEDLISTQUEUE_H)
#define LINKEDLISTQUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

#define Element Treenode *

typedef struct Node
{
    Element data;
    struct Node *next;
} Node;

typedef struct linkedlistqueue
{
    Node *front;
    Node *rear;
} linkedlistqueue;

//最后需要给Queue free()释放空间

linkedlistqueue *Init_queue();
/**
 * @brief 创建第一个队列
 *
 * @param linkedlistqueu
 */
void Firstcreat_linkedlistqueue(linkedlistqueue *linkedlistqueu, Element data);
/**
 * @brief 入队
 *
 * @return linkedlistqueue*
 */
void Push_linkedlistqueue(linkedlistqueue *linkedlistqueu, Element data);
/**
 * @brief 出队
 *
 */
void Pop_linkedlistqueue(linkedlistqueue *linkedlistqueu);
/**
 * @brief 第一个元素
 *
 * @param linkedlistqueu
 * @return int
 */
Element front_linkedlistqueue(linkedlistqueue *linkedlistqueu);
/**
 * @brief 判断是否为空队列
 * 
 * @param linkedlistqueu 
 * @return int 
 */
int Isempty_linkedlistqueue(linkedlistqueue *linkedlistqueu);

#endif // LINKEDLISTQUEUE_H
