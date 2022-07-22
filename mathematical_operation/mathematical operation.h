#if !defined(MATHEMATICAL_OPERATION_H)
#define MATHEMATICAL_OPERATION_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char data;
    struct Node *next;
} Node;

typedef struct Linkedlistqueue
{
    Node *front;
    Node *rear;
} Linkedlistqueue;
extern Node *linkedliststack;
extern struct Linkedlistqueue*linkedlistqueue;
/**
 * @brief 创建第一个队列
 *
 * @param linkedlistqueu
 */
void Firstcreat_linkedlistqueue(char x);
/**
 * @brief 入队
 *
 * @return linkedlistqueue*
 */
void Push_linkedlistqueue(char x);
/**
 * @brief 出队
 *
 */
int Pop_linkedlistqueue();
/**
 * @brief 第一个元素
 *
 * @param linkedlistqueu
 * @return int
 */
char front_linkedlistqueue();
/**
 * @brief 判断是否为空队列
 * 
 * @param linkedlistqueu 
 * @return int 
 */
int Isemptyqueue();

/**
 * @brief 建立第一个链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
Node *Firstcreatstack(char x);
/**
 * @brief 入栈
 *
 */
Node * push_linkedliststack(char x);
/**
 * @brief 出栈
 *
 */
Node * pop_linkedliststack();
/**
 * @brief 顶部元素
 *
 */
 char top_linkedliststack();
/**
 * @brief 判断是否为空栈
 * 
 * @param top 
 * @return int 
 */
int Isemptystack();

#endif 
