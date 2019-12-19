#include "unity.h"
#include "TreeHeight.h"
#include "Node.h"
#include <stdlib.h>
#include <stdio.h>
void setUp(void){}

void tearDown(void){}

/**
*            5
*        /      \
*     4           11
*      \          /  \
*       2       10   12
*     /   \    /
*    1    3   7
*           /  \
*          6    8
*                \
*                 9
**/
void test_getTreeHeight(void){
    //Build number tree
    Node * node9 = createNode(9,NULL,NULL);
    Node * node8 = createNode(8,NULL,node9);
    Node * node6 = createNode(6,NULL,NULL);
    Node * node7 = createNode(7,node6,node8);
    Node * node1 = createNode(1,NULL,NULL);
    Node * node3 = createNode(3,NULL,NULL);
    Node * node10 = createNode(10,node7,NULL);
    Node * node12 = createNode(12,NULL,NULL);
    Node * node2 = createNode(2,node1,node3);
    Node * node4 = createNode(4,NULL,node2);
    Node * node11 = createNode(11,node10,node12);
    Node * node5 = createNode(5,node4,node11);

    //Test
    int length = getTreeHeight(node5);
    TEST_ASSERT_EQUAL(6,length);
}
