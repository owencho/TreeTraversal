#include "TreeTraversal.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node * createNode(int value,  Node * left ,Node * right){
    Node * node = malloc(sizeof(Node));
    node->value = value ;
    node->left = left;
    node->right = right;
    return node;
}


void tranverseInOrder(Node * root){
    if(root->left != NULL){
        tranverseInOrder(root->left);
    }
    printf("%d \n",root->value);
    if (root->right != NULL){
        tranverseInOrder(root->right);
    }
}

void tranversePreOrder(Node * root){
    printf("%d \n",root->value);
    if(root->left != NULL){
        tranversePreOrder(root->left);
    }
    if (root->right != NULL){
        tranversePreOrder(root->right);
    }
}

void tranversePostOrder(Node * root){
    if(root->left != NULL){
        tranversePostOrder(root->left);
    }
    if (root->right != NULL){
        tranversePostOrder(root->right);
    }
    printf("%d \n",root->value);
}

/*
int getTreeHeight(Node * root){
    int left =0, right = 0;
    if(root->left != NULL){
        left = getTreeHeight(root->left);
    }
    if (root->right != NULL){
        right = getTreeHeight(root->right);
    }

    if(left >= right){
        return left+1 ;
    }
    else{
        return right+1;
    }
}
*/
