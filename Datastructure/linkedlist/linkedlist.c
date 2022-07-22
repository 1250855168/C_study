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
/**
 * @brief 反转一个单链表
 *
 */
void Reveserlist();
/**
 * @brief 反转链表a-b区间
 *
 * @param a 第a个链表
 * @param b 第b个链表
 */
void AnyReveserlist(int a, int b);
/**
 * @brief 链表的长度
 *
 */
int SieofList();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Creatlinkedlist();
    }
    PrintLinkedlist();
    Reveserlist();
    printf("%d\n", List_back());
    Pop_back();
    printf("%d\n", List_back());
    printf("%d\n",list_front());
    Pop_front();
    printf("%d\n",list_front());
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
        temp = current;
        current = current->next;
    }
    free(temp->next);
    temp->next = NULL;
}

int list_front()
{
    if (head == NULL)
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
    if (head == NULL)
    {
        return;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }
}

void Reveserlist()
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    else
    {
        Node *temp = head;
        Node *current = head->next;
        Node *currentNext = NULL;
        temp->next = NULL;
        while (current->next != NULL)
        {
            currentNext = current->next;
            current->next = temp;
            temp = current;
            current = currentNext;
        }
        current->next = temp;
        head = current;
    }
}

int SieofList()
{
    Node *temp = head;
    int x = 0;
    while (temp != NULL)
    {
        x++;
        temp = temp->next;
    }
    return x;
}

// void AnyReveserlist(int a, int b)
// {
//     if ((a > 0) && (a < SieofList()) && (b > 0) && (b < SieofList()))
//     {
//         return;
//     }
//     else
//     {
//         Node *temp = head;
//         Node *current = head->next;
//         Node *currentNext = NULL;
//         temp->next = NULL;
//         while (current->next != NULL)
//         {
//             currentNext = current->next;
//             current->next = temp;
//             temp = current;
//             current = currentNext;
//         }
//         current->next = temp;
//         head = current;
//     }
// }
