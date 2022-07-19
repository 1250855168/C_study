#ifndef FOUNDWORDS_H
#define FOUNDWORDS_H
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


struct Mystring *Creatlinked(char *p);
struct Mystring *Linked(struct Mystring *head, char *p);
Mystring *Found_String(char *p, Mystring *head, int len);
void PrintfLinked(struct Mystring *head);
void DeLinked(struct Mystring *current, struct Mystring *Del);
void count(struct Mystring *head);
void FreeLinked(struct Mystring *head);

struct Hash *CreatHashlinked(char *p);
struct Hash *HashLinked(struct Hasharray *Hasharray, char *p);
Hasharray *CreatHash(Hasharray Hasharray[100], struct Mystring *head);
void PrintfHash(const Hasharray HashArray[100]);
void FreeHash(Hasharray HashArray[100]);
int Getessay(char *v);
#endif