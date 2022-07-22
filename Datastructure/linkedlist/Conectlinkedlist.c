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
/**
 * @brief 链接两个链表
 *
 */
void Conectlinkedlist(Node *head, Node *tail);
/**
 * @brief 算个链表的结点数
 *
 * @param head
 * @return int
 */
int SieofList(Node *head);
/**
 * @brief 给链表排序 再给链表排序
 *
 */
void sortlinkedlist(Node *head);
/**
 * @brief 反转一个链表
 * 
 * @param head 
 */
void Reveserlist(Node *head);

int main()
{
    struct Node *head1 = (Node *)malloc(sizeof(Node));
    struct Node *head2 = (Node *)malloc(sizeof(Node));
    for (int i = 0; i < 5; i++)
    {
        head1 = Creatlinkedlist(head1);
    }
    PrintLinkedlist(head1);
    for (int i = 0; i < 5; i++)
    {
        head2 = Creatlinkedlist(head2);
    }
    PrintLinkedlist(head2);
    printf("\n");
    printf("%d\n", SieofList(head1));
    printf("\n");
    Conectlinkedlist(head1, head2);
    PrintLinkedlist(head1);
    Reveserlist(head1);
    printf("\n");
    PrintLinkedlist(head1);
    FreeLinkedlist(head1);
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

void Conectlinkedlist(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail=NULL;
    sortlinkedlist(head);
}

int SieofList(Node *head)
{
    Node *temp = head->next;
    int x = 0;
    while (temp != NULL)
    {
        x++;
        temp = temp->next;
    }
    return x;
}

void sortlinkedlist(Node *head)
{
    Node *temp1 = head;
    Node *temp2 = head;
    while (temp1 != NULL)
    {
        temp2 = temp1;
        while (temp2 != NULL)
        {
            if (temp1->data > temp2->data)
            {
                int temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
        if (temp1->next == NULL)
        {
            break;
        }
    }
}

void Reveserlist(Node *head)
{
    if (head->next == NULL || head->next->next == NULL)
    {
        return;
    }
    else
    {
        Node *temp = head->next;
        Node *current = head->next->next;
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
        head->next = current;
    }
}