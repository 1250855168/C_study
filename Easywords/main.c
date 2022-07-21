#include "Foundwords.h"

int main()
{
    Mystring *head = NULL;
    Hasharray Hasharray[100];
    for (int i = 0; i < 100; i++)
    {
        Hasharray[i].Hash.next = NULL;
    }
    char v[30000];
    Getessay(v);
    head = Found_String(v, head, strlen(v));
    count(head);
    CreatHash(Hasharray, head);
    PrintfHash(Hasharray);
    FreeHash(Hasharray);
    FreeLinked(head);
    return 0;
}