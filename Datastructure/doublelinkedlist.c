#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *pre;
} Node;

/**
 * @brief 建立第一个双链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
Node *FirstcreatCirlist(Node *);
/**
 * @brief 创建一个双链表
 *
 * @param data
 */
Node *CreatlinkedCirlist(Node *);
/**
 * @brief 遍历双链表
 *
 */
void PrintLinkedCirlist(Node *head);
/**
 *
 * @brief 释放双链表
 *
 */
void FreeLinkedCirlist(Node *head);
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

int main()
{
    Node *head = malloc(sizeof(Node));
    head->next = NULL;
    head->pre = NULL;
    for (int i = 0; i < 10; i++)
    {
        CreatlinkedCirlist(head);
    }
    PrintLinkedCirlist(head);
    FreeLinkedCirlist(head);
    return 0;
}

Node *FirstcreatCirlist(Node *head)
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    p->pre = head;
    return p;
}

Node *CreatlinkedCirlist(Node *head)
{
    if (head->next == NULL)
    {
        head->next = FirstcreatCirlist(head);
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = head->next;
        head->next->pre = p;
        head->next = p;
        p->pre = head;
    }
    return head;
}

void PrintLinkedCirlist(Node *head)
{
    Node *current = head->next;
    Node *temp = NULL;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        temp = current;
        current = current->next;
    }
    while (temp->pre != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->pre;
    }
}

void FreeLinkedCirlist(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        head = head->next;
        free(current);
        current = NULL;
        current = head;
    }
    free(head);
    head = NULL;
}

int List_back(Node *head)
{
    Node *current = head->next;
    while (current->next != NULL)
    {
        current = current->next;
    }
    return current->data;
}
void Pop_back(Node *head)
{
    Node *current = head->next;
    Node *temp = head->next;
    while (current->next != NULL)
    {
        temp = current;
        current = current->next;
    }
    free(temp->next);
    temp->next = NULL;
}
int list_front(Node *head)
{
    if (head->next == NULL)
    {
        return 0;
    }
    else
    {
        return head->next->data;
    }
}

int Pop_front(Node *head)
{
    if (head->next == NULL)
    {
        return 0;
    }
    else
    {
        Node*temp=head->next;
        head = head->next->next;
        free(temp);
        temp=NULL;
    }
}
