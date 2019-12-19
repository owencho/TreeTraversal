#include "TreeHeight.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
