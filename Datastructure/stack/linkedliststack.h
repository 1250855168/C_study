#if !defined(LINKEDLISTSTACH_H)
#define LINKEDLISTSTACH_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;


//最后需要给Stack free()释放空间 

 
/**
 * @brief 建立第一个链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
Node *Firstcreatstack();
/**
 * @brief 入栈
 *
 */
void push_linkedliststack(Node *stack);
/**
 * @brief 出栈
 *
 */
void pop_linkedliststack(Node *stack);
/**
 * @brief 顶部元素
 *
 */
int top_linkedliststack(Node *stack);

/**
 * @brief 判断是否为空栈
 * 
 */
int Isempty_linkedliststack(Node *stack);

#endif // LINKEDLISTSTACH_H
