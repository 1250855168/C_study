#include "headlinkedlist.h"

Node *Firstcreat(Elemtype data)
{
    struct Node *p = (Node *)malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    return p;
}

void Insert_linkedlist(Node *head,Elemtype data)
{
    if (head->next == NULL)
    {
        head->next = Firstcreat(data);
    }
    else
    {
        struct Node *p = (Node *)malloc(sizeof(Node));
        p->data = data;
        p->next = NULL;
        p->next = head->next;
        head->next = p;
    }
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

Elemtype List_back(Node *head)
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
Elemtype list_front(Node *head)
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

void Pop_front(Node *head)
{
    if (head->next == NULL)
    {
        return ;
    }
    else
    {
        Node *temp = head->next;
        head = head->next->next;
        free(temp);
        temp = NULL;
    }
}
