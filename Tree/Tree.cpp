#include "Tree.h"

adrNode newNode_1301210461(infotype x){
    adrNode p = new Node;
    info(p) = x;
    left(p) = nil;
    right(p) = nil;
    return p;
}

adrNode findNode_1301210461(adrNode root, infotype x){
    adrNode p = root;
    while (left(p) != nil){
        if (info(p) == x){
            return p;
        }
        p = left(p);
    }
}

void insertNode_1301210461(adrNode &root, adrNode p){
    if(root == nil){
        root = p;
    }else if(info(p) <= info(root)){
        insertNode_1301210461(left(root),p);
    }else if(info(p) > info(root)){
        insertNode_1301210461(right(root),p);
    }else if(info(p) == info(root)){
        printf("Data sudah ada");
    }
}

void printPreOrder_1301210461(adrNode root){
    if(root != nil){
        printf("%d ", info(root));
        printPreOrder_1301210461(left(root));
        printPreOrder_1301210461(right(root));
    }
}

void printDescendant_1301210461(adrNode root, infotype x){
    if(root!=nil){
        printDescendant_1301210461(left(root),x);
        printDescendant_1301210461(right(root),x);
        if(info(root) == x){
            printPreOrder_1301210461(left(root));
            printPreOrder_1301210461(right(root));
        }
    }
}

int sumNode_1301210461(adrNode root){
    if(root != nil){
        return (info(root) + sumNode_1301210461(left(root)) + sumNode_1301210461(right(root)));
    }
}

int countLeaves_1301210461(adrNode root){
    if(root == nil){
        return 0;
    }
    if((left(root) == nil) && (right(root) == nil)){
        return 1;
    }else{
        return countLeaves_1301210461(left(root)) + countLeaves_1301210461(right(root));
    }
}

int heightTree_1301210461(adrNode root){
    int h = 0;
    if (root != nil){
        int left2 = heightTree_1301210461(left(root));

        int maxHeight = left2;
        h = maxHeight + 1;
    }
    return h;
}
