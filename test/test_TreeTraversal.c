#include "unity.h"
#include "TreeTraversal.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void setUp(void){}
void tearDown(void){}

/**
*          10
*       /    \
*     5       20
*   /  \     / \
*  1    6  15   25
*         /
*       11
*
* OUTPUT = 1 5 6 10 11 15 20 25
**/
void test_tranverseInOrder(void){
    //Build number tree
    printf("In Order test \n");
    Node * node11 = createNode(11,NULL,NULL);
    Node * node15 = createNode(15,node11,NULL);
    Node * node25 = createNode(25,NULL,NULL);
    Node * node20 = createNode(20,node15,node25);
    Node * node1 = createNode(1,NULL,NULL);
    Node * node6 = createNode(6,NULL,NULL);
    Node * node5 = createNode(5,node1,node6);
    Node * node10 = createNode(10,node5,node20);

    //Test
    tranverseInOrder(node10);
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
* OUTPUT = 10 5 1 6 20 15 11 25
**/
void test_tranversePreOrder(void){
    //Build number tree
    printf("pre Order test \n");
    Node * node11 = createNode(11,NULL,NULL);
    Node * node15 = createNode(15,node11,NULL);
    Node * node25 = createNode(25,NULL,NULL);
    Node * node20 = createNode(20,node15,node25);
    Node * node1 = createNode(1,NULL,NULL);
    Node * node6 = createNode(6,NULL,NULL);
    Node * node5 = createNode(5,node1,node6);
    Node * node10 = createNode(10,node5,node20);

    //Test
    tranversePreOrder(node10);
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
* OUTPUT = 1 6 5 11 15 25 20 10
**/
void test_tranversePostOrder(void){
    //Build number tree
    printf("post Order test \n");
    Node * node11 = createNode(11,NULL,NULL);
    Node * node15 = createNode(15,node11,NULL);
    Node * node25 = createNode(25,NULL,NULL);
    Node * node20 = createNode(20,node15,node25);
    Node * node1 = createNode(1,NULL,NULL);
    Node * node6 = createNode(6,NULL,NULL);
    Node * node5 = createNode(5,node1,node6);
    Node * node10 = createNode(10,node5,node20);

    //Test
    tranversePostOrder(node10);
}


/*
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
*/
