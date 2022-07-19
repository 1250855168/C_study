#include<stdio.h>
#include<string.h>

int main()
{
    char b[17]={"0123456789ABCDEF"};
    int a;
    char c[8]={0};
    printf("请输入一个十进制数：\n");
    scanf("%d",&a);
for (int i = 0; a ; i++)
{
    c[i]=b[a%16];
    a/=16;
    c[i+1]='\0';
}
printf("0x");
for (int i = strlen(c)-1; i>=0; i--)
{
    printf("%c",c[i]);
} 
printf("\n");
    return 0;
}