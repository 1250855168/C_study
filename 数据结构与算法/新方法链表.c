#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

typedef struct list
{
    int size;
    struct Node *head;
    struct Node *tail;
} list;

/**
 * @brief 初始化链表
 *
 */
void Initlist(list *list);
/**
 * @brief 建立第一个链表
 *
 * @param data 接收的数据
 * @return Node* 返回一个struct Node *
 */
void Firstcreat(list *list);
/**
 * @brief 创建一个链表
 *
 * @param data
 */
void Creatlinkedlist(list *list);
/**
 * @brief 遍历链表
 *
 */
void PrintLinkedlist(list *list);
/**
 *
 * @brief 释放链表
 *
 */
void FreeLinkedlist(list *list);

int main()
{
    Node list;
    Initlist(&list);
    return 0;
}

void Initlist(list *list)
{
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void Firstcreat(list *list)
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    list->head = p;
    list->tail = p;
}
void Creatlinkedlist(list *list)
{
    if (list->head == NULL)
    {
        Firstcreat(&list);
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        list->tail->next = p;
        list->tail = p;
    }
    list->size++;
}

void PrintLinkedlist(list *list)
{
    struct Node *temp = list->head;
    for (int i = 0; i < list->size; i++)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void FreeLinkedlist(list *list)
{
    Node *temp = list->head;
    while (current != NULL)
    {
        list->head = list->head->next;
        free(current);
        current = NULL;
        current = list->head;
    }
    free(list->head);
    list->head = NULL;
}