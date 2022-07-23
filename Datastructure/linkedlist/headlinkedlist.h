#if !defined(HEADLINKEDLIST_H)
#define HEADLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;


/**
 * @brief 建立第一个链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
Node *Firstcreat();
/**
 * @brief 创建一个链表
 *
 * @param data
 */
void Creatlinkedlist(Node *head);
/**
 * @brief 遍历链表
 *
 */
void PrintLinkedlist(Node *head);
/**
 *
 * @brief 释放链表
 *
 */
void FreeLinkedlist(Node *head);
/**
 * @brief 找到链表的最后一个元素
 *
 */
int List_back(Node *head);
/**
 * @brief 删除最后一个元素
 *
 */
void Pop_back(Node *head);
/**
 * @brief 找到第一个元素
 *
 * @return int
 */
int list_front(Node *head);
/**
 * @brief 删除第一个元素
 *
 */
int Pop_front(Node *head);

#endif // HEADLINKEDLIST_H
