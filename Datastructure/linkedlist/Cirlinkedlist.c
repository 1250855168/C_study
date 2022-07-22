#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

/**
 * @brief 建立第一个循环链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
void FirstcreatCirlist();
/**
 * @brief 创建一个循环链表
 *
 * @param data
 */
void CreatlinkedCirlist();
/**
 * @brief 遍历循环链表
 *
 */
void PrintLinkedCirlist();
/**
 *
 * @brief 释放循环链表
 *
 */
void FreeLinkedCirlist();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        CreatlinkedCirlist();
    }
    PrintLinkedCirlist();
    FreeLinkedCirlist();
    return 0;
}

void FirstcreatCirlist()
{
    head = malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &head->data);
    head->next = head;
}

void CreatlinkedCirlist()
{
    if (head == NULL)
    {
        FirstcreatCirlist();
    }
    else
    {
        Node *p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        Node *current = malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &current->data);
        p->next = current;
        current->next = head;
    }
}

void PrintLinkedCirlist()
{
    Node *p = head;
    while (p->next != head)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

void FreeLinkedCirlist()
{
    Node *p = head->next;
    if (p == head)
    {
        printf("link is empty.\n");
        free(p);
        head = NULL;
    }
    else
    {
        while (p != head)
        {
            head->next = p->next;
            free(p);
            p = head->next;
        }
        free(head);
        head = NULL;
    }
}