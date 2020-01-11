#include "unity.h"
#include "TreeTraversal.h"
#include "Node.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void setUp(void){}
void tearDown(void){}

Node * createNode(int value,  Node * left ,Node * right){
    Node * node = malloc(sizeof(Node));
    node->value = value ;
    node->left = left;
    node->right = right;
    return node;
}

void freeAllNodesInTree(Node *root){
    if(root == NULL) return;
    if(root->left != NULL){
        freeAllNodesInTree(root->left);
    }
    if (root->right != NULL){
        freeAllNodesInTree(root->right);
    }
    freeNode(root);
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

    tranverseInOrder(node10);
    freeAllNodesInTree(node10);
}


/**
*          100
*       /     \
*     50       120
*   /  \       / \
*  10    60   110  125
*               \
*               115
*
* OUTPUT = 10 50 60 100 110 115 120 125
**/
void test_tranverseInOrder_100(void){
    //Build number tree
    printf("In Order test 100\n");
    Node * node115 = createNode(115,NULL,NULL);
    Node * node110 = createNode(110,NULL,node115);
    Node * node125 = createNode(125,NULL,NULL);
    Node * node120 = createNode(120,node110,node125);
    Node * node10 = createNode(10,NULL,NULL);
    Node * node60 = createNode(60,NULL,NULL);
    Node * node50 = createNode(50,node10,node60);
    Node * node100 = createNode(100,node50,node120);

    //Test
    tranverseInOrder(node100);
    freeAllNodesInTree(node100);
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
    freeAllNodesInTree(node10);
}

/**
*          100
*       /     \
*     50       120
*   /  \       / \
*  10    60   110  125
*               \
*               115
*
* OUTPUT = 100 50 10 60 120 110 115 125
**/
void test_tranversePreOrder_100(void){
    //Build number tree
    printf("In Order test 100\n");
    Node * node115 = createNode(115,NULL,NULL);
    Node * node110 = createNode(110,NULL,node115);
    Node * node125 = createNode(125,NULL,NULL);
    Node * node120 = createNode(120,node110,node125);
    Node * node10 = createNode(10,NULL,NULL);
    Node * node60 = createNode(60,NULL,NULL);
    Node * node50 = createNode(50,node10,node60);
    Node * node100 = createNode(100,node50,node120);

    //Test
    tranversePreOrder(node100);
    freeAllNodesInTree(node100);
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
    freeAllNodesInTree(node10);
}

/**
*          100
*       /     \
*     50       120
*   /  \       / \
*  10    60   110  125
*               \
*               115
*
* OUTPUT = 10 60 50 115 110 125 120 100
**/
void test_tranversePostOrder_100(void){
    //Build number tree
    printf("In Order test 100\n");
    Node * node115 = createNode(115,NULL,NULL);
    Node * node110 = createNode(110,NULL,node115);
    Node * node125 = createNode(125,NULL,NULL);
    Node * node120 = createNode(120,node110,node125);
    Node * node10 = createNode(10,NULL,NULL);
    Node * node60 = createNode(60,NULL,NULL);
    Node * node50 = createNode(50,node10,node60);
    Node * node100 = createNode(100,node50,node120);

    //Test
    tranversePostOrder(node100);
    freeAllNodesInTree(node100);
}
