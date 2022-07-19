#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;
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
void Creatlinkedlist();
/**
 * @brief 遍历链表
 *
 */
void PrintLinkedlist();
/**
 *
 * @brief 释放链表
 *
 */
void FreeLinkedlist();
/**
 * @brief 找到链表的最后一个元素
 *
 */
int List_back();
/**
 * @brief 删除最后一个元素
 *
 */
void Pop_back();
/**
 * @brief 找到第一个元素
 * 
 * @return int 
 */
int list_front();
/**
 * @brief 删除第一个元素
 * 
 */
void Pop_front();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Creatlinkedlist();
    }
    PrintLinkedlist();
    FreeLinkedlist();

    return 0;
}

Node *Firstcreat()
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    printf("please input a number:");
    scanf("%d", &p->data);
    p->next = NULL;
    head = p;
    return p;
}

void Creatlinkedlist()
{
    if (head == NULL)
    {
        head = Firstcreat();
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        printf("please input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        p->next = head;
        head = p;
    }
}

void PrintLinkedlist()
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void FreeLinkedlist()
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

int List_back()
{
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    return current->data;
}

void Pop_back()
{
    Node *current = head;
    Node *temp = head;
    while (current->next != NULL)
    {
        temp=current;
        current=current->next;
    }
    temp->next=NULL;
}

int list_front()
{
   if (head==NULL)
   {
    return 0;
   }
   else
   {
    return head->data;
   }
}
void Pop_front()
{
   if (head==NULL)
   {
    return 0;
   }
   else
   {
    head=head->next;
   }
}
