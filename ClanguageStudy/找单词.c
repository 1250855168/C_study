

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct Mystring
{
    char *p;
    struct Mystring *next;
    int count;
} Mystring;

typedef struct Hash
{
    char *p;
    struct Hash *next;
} Hash;

typedef struct Hasharray
{
    struct Hash Hash;
} Hasharray;

struct Mystring *Creatlinked(char *p)
{
    struct Mystring *Current = malloc(sizeof(Mystring));
    Current->p = p;
    Current->count = 1;
    Current->next = NULL;
    return Current;
}

struct Mystring *Linked(struct Mystring *head, char *p)
{
    if (head == NULL)
    {
        head = Creatlinked(p);
    }
    else
    {
        struct Mystring *Current = malloc(sizeof(Mystring));
        Current->p = p;
        Current->next = NULL;
        Current->count = 1;
        Current->next = head->next;
        head->next = Current;
        return head;
    }
}

Mystring *Found_String(char *p, Mystring *head, int len)
{
    int x = 0;
    while (x <= len)
    {
        if (*p >= 'A' && *p <= 'z')
        {
            head = Linked(head, p);
            while (*p >= 'A' && *p <= 'z')
            {
                x++;
                p++;
            }
            *p = '\0';
        }
        x++;
        p++;
    }
    return head;
}

void PrintfLinked(struct Mystring *head)
{
    struct Mystring *Current = head;
    while (Current != NULL)
    {
        printf(" 单词：%s  出现次数：%d\n", Current->p, Current->count);
        Current = Current->next;
    }
}

void DeLinked(struct Mystring *current, struct Mystring *Del)
{
    struct Mystring *current0 = NULL;
    while (current->p != Del->p)
    {
        current0 = current;
        current = current->next;
    }
    current0->next = current->next;
    free(Del);
    Del = NULL;
}

void count(struct Mystring *head)
{
    struct Mystring *current1 = head;
    struct Mystring *current2 = head;
    while (current1->next)
    {
        current2 = current1;
        while (current2->next != NULL)
        {
            if (strcmp(current2->next->p, current1->p) == 0)
            {
                current1->count++;
                DeLinked(current1, current2->next);
            }
            current2 = current2->next;
            if (current2 == NULL)
            {
                break;
            }
        }
        current1 = current1->next;
    }
}

//哈希表

struct Hash *Creatlinked1(char *p)
{
    struct Hash *Current = malloc(sizeof(struct Hash));
    Current->p = p;
    Current->next = NULL;
    return Current;
}

struct Hash *Linked1(struct Hasharray *Hasharray, char *p)
{
    if ((*Hasharray).Hash.next == NULL)
    {
        Hasharray->Hash.next = Creatlinked1(p);
    }
    else
    {
        struct Hash *Current = malloc(sizeof(struct Hash));
        Current->p = p;
        Current->next = NULL;
        Current->next = (*Hasharray).Hash.next;
        (*Hasharray).Hash.next = Current;
        return Hasharray->Hash.next;
    }
}
Hasharray *CreatHash(Hasharray Hasharray[100], struct Mystring *head)
{
    Mystring *current1 = head;
    Mystring *current2 = head;
    for (int i = 1; i < 100; i++)
    {
        current1 = current2;
        while (current1 != NULL)
        {
            if (i == current1->count)
            {
                Linked1(&Hasharray[i], current1->p);
            }
            current1 = current1->next;
        }
    }
    return Hasharray;
}

void PrintfHash(Hasharray HashArray[100])
{
    for (int i = 2; i > 0; i--)
    {
        if (HashArray[i].Hash.next == NULL)
        {
            continue;
        }
        else
        {
            printf("\t出现%d次的单词\n", i);
            while (HashArray[i].Hash.next != NULL)
            {
                printf("\t%s\n  ", HashArray[i].Hash.next->p);
                HashArray[0].Hash.next = HashArray[i].Hash.next;
                HashArray[i].Hash.next = HashArray[i].Hash.next->next;
                free(HashArray[0].Hash.next);
                HashArray[0].Hash.next = NULL;
            }
        }
    }
}
void FreeLinked(struct Mystring *head)
{
    struct Mystring *current = head;
    while (current != NULL)
    {
        head = head->next;
        free(current);
        current = NULL;
        current = head;
    }
}
void PrintfHash1(const Hasharray HashArray[100])
{
    Hasharray current[1];
    for (int i = 99; i > 0; i--)
    {
        if (HashArray[i].Hash.next == NULL)
        {
            continue;
        }
        else
        {
            printf("\t出现%d次的单词\n", i);
            current[0].Hash.next = HashArray[i].Hash.next;
            while (current[0].Hash.next != NULL)
            {
                printf("\t%s\n  ", current[0].Hash.next->p);
                current[0].Hash.next = current[0].Hash.next->next;
            }
        }
    }
}
void FreeHash1(Hasharray HashArray[100])
{
    for (int i = 99; i > 0; i--)
    {
        if (HashArray[i].Hash.next == NULL)
        {
            continue;
        }
        else
        {
            while (HashArray[i].Hash.next != NULL)
            {
                HashArray[0].Hash.next = HashArray[i].Hash.next;
                HashArray[i].Hash.next = HashArray[i].Hash.next->next;
                free(HashArray[0].Hash.next);
                HashArray[0].Hash.next = NULL;
            }
        }
    }
}

int main()
{
    Mystring *head = NULL;
    Hasharray Hasharray[100];
    for (int i = 0; i < 100; i++)
    {
        Hasharray[i].Hash.next = NULL;
    }
    char v[30000];
    int i = 0, j;
    FILE *fp;
    fp = fopen("1.txt", "r");
    if (fp == NULL)
    {
        return -1;
    }
    while ((v[i] = fgetc(fp)) != EOF)
    {
        i++;
    }
    fclose(fp);
    fp = NULL;
    for (j = 0; j < i; j++)
    {
        printf("%c", v[j]);
    }
    printf("\n");
    head = Found_String(v, head, strlen(v));
    count(head);
    // PrintfLinked(head);
    CreatHash(Hasharray, head);
    PrintfHash1(Hasharray);
    FreeHash1(Hasharray);
    FreeLinked(head);
    return 0;
}

//valgrind --tool=memcheck --leak-check=full ./1