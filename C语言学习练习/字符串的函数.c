#include <stdio.h>
#include <assert.h>

int Mystrlen(const char *p);
int Mystrcmp(const char *p1, const char *p2);
void Mystrcopy(char *p1, const char *p2);
char *strcat(char *dest, const char *src);
void *my_Memcpy(void *det,const void *str,size_t n);
void *my_Memset(void *s, int c, size_t n);

int main()
{
    // char *p1 = "djhfk1";
    // printf("%d\n", Mystrlen(p1));
    // char *p2="djhfk";
    // printf("%d\n",Mystrcmp(p1,p2));
    char arry[100]="2131313121321";
    char brry[]="21313dfsfa";
    strcat(arry, brry);
    printf("%s\n",arry);
    // Mystrcopy(arry,p1);
    // puts(arry);
    return 0;
}

int Mystrlen(const char *p)
{
    assert(p);
    const char *p0 = p;
    int i = 0;
    while (*p0 != '\0')
    {
        i++;
        p0++;
    }
    return i;
}
int Mystrcmp(const char *p1, const char *p2)
{
    assert(p1);
    assert(p2);
    while (*p1==*p2)
    {
        if (*p1=='\0'||*p2=='\0')
        {
            break;
        }
        p1++;
        p2++;
    }
    return *p1-*p2;
}
void Mystrcopy(char *p1, const char *p2)
{
    assert(p1);
    assert(p2);
    while (*p1=*p2)
    {
        p1++;
        p2++;
    }
}
char *strcat(char *dest, const char *src)
{
    int i;
    while (*dest!='\0')
    {
        dest++;
    }
    for (i = 0; *(src+i)!='\0'; i++)
    {
        *(dest+i)=*(src+i);
    }
    *(dest+i)=*(src+i); 
    return dest;
}
void *my_Memcpy(void *det,const void *str,size_t n)
{
    for (int i = 0; i < n; i++)
    {
        *((char*)det+i)=*((char*)str+i);
    }
}

void *my_Memset(void *s, int c, size_t n)
{
     for (int i = 0; i < n; i++)
    {
        *((char*)s+i)=c;
    }
}

