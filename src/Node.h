#ifndef _NODE_H
#define _NODE_H

typedef struct Node Node ;

struct Node{
    int value;
    Node * left ;
    Node * right ;
};

Node * createNode(int value,  Node * left ,Node * right);
#endif // _NODE_H
