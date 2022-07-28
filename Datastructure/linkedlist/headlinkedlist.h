#if !defined(HEADLINKEDLIST_H)
#define HEADLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;

typedef struct Node
{
    Elemtype data;
    struct Node *next;
} Node;

/**
 * @brief 建立第一个链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
Node *Firstcreat(Elemtype data);
/**
 * @brief 插入一个Elemtype data
 *
 * @param data
 */
void Insert_linkedlist(Node *head,Elemtype data);
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
Elemtype List_back(Node *head);
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
Elemtype list_front(Node *head);
/**
 * @brief 删除第一个元素
 *
 */
void Pop_front(Node *head);

#endif // HEADLINKEDLIST_H
