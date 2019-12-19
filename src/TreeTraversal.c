#include "TreeTraversal.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


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
