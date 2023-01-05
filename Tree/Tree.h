#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
using namespace std;
#define info(P) (P)->info
#define left(P) (P)->left
#define right(P) (P)->right
#define nil NULL

typedef int infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_1301210461(infotype x);
adrNode findNode_1301210461(adrNode root, infotype x);
void insertNode_1301210461(adrNode &root, adrNode p);
void printPreOrder_1301210461(adrNode root);
void printDescendant_1301210461(adrNode root, infotype x);
int sumNode_1301210461(adrNode root);
int countLeaves_1301210461(adrNode root);
int heightTree_1301210461(adrNode root);

#endif // TREE_H_INCLUDED
