#include<stdio.h>
#include<ctype.h>

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    int num[26]={0};
    char ch;
    while ((ch=getchar())!='#')
    {
        if (ch>='A'&&ch<='Z')
        {
            num[ch-'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c:%d\t",i+'A',num[i]);
    }
    printf("\n");
    return 0;
}