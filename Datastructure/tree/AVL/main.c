#include "AVL.h"

int main()
{
    struct AVL *root = NULL;
    Insert_AVL(&root, 10);
    Midordertraverse(root);
    Insert_AVL(&root, 15);
    Midordertraverse(root);
    Insert_AVL(&root, 14);
    Midordertraverse(root);
    Insert_AVL(&root, 9);
    Midordertraverse(root);
    Insert_AVL(&root, 8);
    Midordertraverse(root);
    Insert_AVL(&root, 7);
    Midordertraverse(root);
    Midordertraverse(root);
    return 0;
}