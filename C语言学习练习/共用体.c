#include <stdio.h>
#include <stdlib.h>

union Mode
{
    int a;
    char b;
} test;

typedef struct
{
    int a;
    int b;
} student, *Student;

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    test.a = 1;
    if (test.b == 1)
    {
        printf("%d\n", test.b);
        printf("small mode\n");
        printf("%p\n", &test.b);
    }
    else if (test.b == 0)
    {
        printf("%d\n", test.b);
        printf("small mode\n");
        printf("%p\n", &test.b);
    }
    printf("%d\n", test.b);
    student student;
    Student Student;
    student.a = 10;
    student.b = 20;
    Student = &student;
    printf("%d\n", student.a);
    printf("%d\n", student.b);
    Student->a = 100;
    Student->b = 200;
    printf("%d\n", student.a);
    printf("%d\n", student.b);
    // typedef int Array[10];
    // Array Array1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", Array1[i]);
    // }
    typedef int Array[10][1];
    Array array1 = {{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}, {10}};
    typedef int(*PA)[1];
    PA PA1;
    PA1 = array1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d\n", PA1[i][j]);
        }
    }
    typedef int (*P)(int a, int b);
    P p1;
    p1 = sum;
    printf("%d\n", p1(1, 2));
    return 0;
}