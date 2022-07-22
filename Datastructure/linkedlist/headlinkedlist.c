
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
Node *Creatlinkedlist(Node *head);
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

int main()
{
    struct Node *head = (Node *)malloc(sizeof(Node));
    for (int i = 0; i < 10; i++)
    {
        head = Creatlinkedlist(head);
    }
    PrintLinkedlist(head);
    printf("%d\n", List_back(head));
    Pop_back(head);
    printf("%d\n", List_back(head));
    FreeLinkedlist(head);
    return 0;
}

Node *Firstcreat()
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    return p;
}

Node *Creatlinkedlist(Node *head)
{
    if (head == NULL)
    {
        head->next = Firstcreat(head);
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        p->next = head->next;
        head->next = p;
    }
    return head;
}

void PrintLinkedlist(Node *head)
{
    Node *current = head->next;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void FreeLinkedlist(Node *head)
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
