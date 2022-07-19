#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#pragma pack()

typedef struct Student
{

unsigned int a:1;
unsigned int b:1;
unsigned int c:1;
unsigned int :0;
unsigned int d:1;
}Student;

int main(int grac, const char *agrv[])
{
    printf("%lu\n",sizeof(Student));
    return 0;
}