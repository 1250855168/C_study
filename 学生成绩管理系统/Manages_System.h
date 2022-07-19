#ifndef FOUNDWORDS_H
#define FOUNDWORDS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student
{
    char Name[12];
    int grad;
} Student;

typedef struct Capacity
{
	struct Student *student;
	int size;
	int capcity;
}contact;


enum Choose
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    REVISE,
    SHOW,
    SORT,
    SAVE,
    READ
}choose;

void Printf();

void Add(struct Capacity *Capacity);
void Del(struct Capacity *Capacity);
void Search(struct Capacity *Capacity);
void Revise(struct Capacity *Capacity);
void Show(struct Capacity *Capacity);
void Sort(struct Capacity *Capacity);
void Save(struct Capacity *Capacity);
void Init(struct Capacity *Capacity);
void Checkcapcity(struct Capacity *Capacity);
int AddCapacity(struct Capacity *Capacity);
void Read(struct Capacity *Capacity);

#endif