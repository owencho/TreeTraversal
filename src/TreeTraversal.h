#ifndef _TREETRAVERSAL_H
#define _TREETRAVERSAL_H
typedef struct Node Node ;

struct Node{
    int value;
    Node * left ;
    Node * right ;
};

Node * createNode(int value,  Node * left ,Node * right);
void tranverseInOrder(Node * root);
void tranversePreOrder(Node * root);
void tranversePostOrder(Node * root);
int getTreeHeight(Node * root);


#endif // _TREETRAVERSAL_H
