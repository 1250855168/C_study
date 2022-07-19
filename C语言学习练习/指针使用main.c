#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char *foo(const char *path, const char *filename)
{
    char *ch = (char *)malloc(sizeof(strlen(path)) + strlen(filename) + 2);
    strcat(ch, path);
    strcat(ch, filename);
    return ch;
}

int main(int argc, const char *argv[])
{
    if (argc != 3)
    {
        printf("Usage:%s <path> <filename>\n", argv[0]);
        return 1;
    }
    char *p = foo(argv[1],argv[2]);
    printf("%s\n", p);
    free(p);
    p = NULL;
    return 0;
}