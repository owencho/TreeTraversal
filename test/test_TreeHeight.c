#include "unity.h"
#include "TreeHeight.h"
#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

Node node1,node2,node3,node4,node5,node6,node7,node8,node9,node10,node11,node12;
Node node15,node20,node25;
int length;
void setUp(void){}
void tearDown(void){}

void initNode(Node * node,int value,  Node * left ,Node * right){
    node->value = value ;
    node->left = left;
    node->right = right;
}
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
    initNode(&node9,9,NULL,NULL);
    initNode(&node8,8,NULL,&node9);
    initNode(&node6,6,NULL,NULL);
    initNode(&node7,7,&node6,&node8);
    initNode(&node1,1,NULL,NULL);
    initNode(&node3,3,NULL,NULL);
    initNode(&node10,10,&node7,NULL);
    initNode(&node12,12,NULL,NULL);
    initNode(&node2,2,&node1,&node3);
    initNode(&node4,4,NULL,&node2);
    initNode(&node11,11,&node10,&node12);
    initNode(&node5,5,&node4,&node11);

    //Test
    length = getTreeHeight(&node5);
    TEST_ASSERT_EQUAL(6,length);
}

/**
*          10
*       /    \
*     5       20
*   /  \     / \
*  1    6  15   25
*         /
*       11
*
**/
void test_getTreeHeight_1_5_6_10_11_15_20_25(void){
    //Build number tree
    initNode(&node11,11,NULL,NULL);
    initNode(&node15,15,&node11,NULL);
    initNode(&node25,25,NULL,NULL);
    initNode(&node20,20,&node15,&node25);
    initNode(&node1,1,NULL,NULL);
    initNode(&node6,6,NULL,NULL);
    initNode(&node5,5,&node1,&node6);
    initNode(&node10,10,&node5,&node20);

    length = getTreeHeight(&node10);
    TEST_ASSERT_EQUAL(4,length);
}

/**
*          10
*       /     \
*     5        12
*   /  \       / \
*  1    6   11   20
*
**/

void test_getTreeHeight_1_5_6_10_11_12_20(void){
    //Build number tree
    initNode(&node11,11,NULL,NULL);
    initNode(&node20,20,NULL,NULL);
    initNode(&node12,12,&node11,&node20);
    initNode(&node1,1,NULL,NULL);
    initNode(&node6,6,NULL,NULL);
    initNode(&node5,5,&node1,&node6);
    initNode(&node10,10,&node5,&node12);

    length = getTreeHeight(&node10);
    TEST_ASSERT_EQUAL(3,length);
}

void test_getTreeHeight_NULL_input(void){
    //Build number tree
    initNode(&node9,9,NULL,NULL);
    initNode(&node8,8,NULL,&node9);
    initNode(&node6,6,NULL,NULL);
    initNode(&node7,7,&node6,&node8);
    initNode(&node1,1,NULL,NULL);
    initNode(&node3,3,NULL,NULL);
    initNode(&node10,10,&node7,NULL);
    initNode(&node12,12,NULL,NULL);
    initNode(&node2,2,&node1,&node3);
    initNode(&node4,4,NULL,&node2);
    initNode(&node11,11,&node10,&node12);
    initNode(&node5,5,&node4,&node11);

    //Test
    length = getTreeHeight(NULL);
    TEST_ASSERT_EQUAL(0,length);
}
