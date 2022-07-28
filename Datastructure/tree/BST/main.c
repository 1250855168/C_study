#include "BST.h"

int main()
{
    struct Treenode *root = NULL;
    root = Insert_BST(root, 10);
    root = Insert_BST(root, 15);
    root = Insert_BST(root, 5);
    root = Insert_BST(root, 151);
    root = Insert_BST(root, 1);
    Midordertraverse(root);
    printf("\n");
    root = Delete_BST(root, 5);
    Midordertraverse(root);
    printf("\n");
    LevelorderTraverse(root);
    return 0;
}