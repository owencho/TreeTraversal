#ifndef _NODE_H
#define _NODE_H

typedef struct Node Node ;

struct Node{
    int value;
    Node * left ;
    Node * right ;
};

#define freeNode(node)                                      \
                          do{if(node) free(node);} while(0)
#endif // _NODE_H
