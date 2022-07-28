#include "BST.h"

int main()
{
    struct Treenode *root = NULL;
    root = Insert_BST(root, 10);
    Midordertraverse(root);
    root = Insert_BST(root, 15);
    Midordertraverse(root);
    root = Insert_BST(root, 5);
    Midordertraverse(root);
    root = Insert_BST(root, 151);
    Midordertraverse(root);
    root = Insert_BST(root, 1);
    Midordertraverse(root);
    root = Delete_BST(root, 5);
    Midordertraverse(root);
    LevelorderTraverse(root);
    return 0;
}