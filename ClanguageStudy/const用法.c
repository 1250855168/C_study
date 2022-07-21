#include<stdio.h>

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

int main()
{
    int arry[10];
    my_Memset(arry, 0, sizeof(arry));
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
    int brry[10];
    my_Memcpy(brry,arry,sizeof(arry));
        for (int i = 0; i < 10; i++)
    {
        printf("%d ",brry[i]);
    }
    printf("\n");
    return 0;
}