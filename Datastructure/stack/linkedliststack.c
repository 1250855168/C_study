#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *top = NULL;
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
void push_linkedliststack();
/**
 * @brief 出栈
 *
 */
void pop_linkedliststack();
/**
 * @brief 顶部元素
 *
 */
int top_linkedliststack();

/**
 * @brief 判断是否为空栈
 * 
 */
int Isempty_linkedliststack();

int main()
{

    push_linkedlist();
    push_linkedlist();
    push_linkedlist();
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n",top_linkedlist());
       pop_linkedlist();
    }
    



    return 0;
}

Node *Firstcreatstack()
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    return p;
}

void push_linkedliststack()
{
    if (top == NULL)
    {
        top = Firstcreatstack();
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        p->next = top;
        top = p;
    }
}

void pop_linkedliststack()
{
    if (top == NULL)
    {
        printf("This is tmpty stack!");
        return;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        free(temp);
        temp = NULL;
    }
}

int top_linkedliststack()
{
    if (top == NULL)
    {
        printf("This is tmpty stack:");
        return 0;
    }
    else
    {
        return top->data;
    }
}


int Isempty_linkedliststack()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}