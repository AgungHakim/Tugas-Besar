#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    adrNode root = nil;
    adrNode p;

    int x[9] = {5,3,9,10,4,7,1,8,6};
    cout << "============================================" << endl;
    for (int i = 0; i <= 8; i++){
        cout << x[i] << " ";
        p = newNode_1301210461(x[i]);
        insertNode_1301210461(root,p);
    }

    printf("\n");
    printf("\nPre order\t\t: ");
    printPreOrder_1301210461(root);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301210461(root,9);

    printf("\n");
    printf("\nSum of BST info\t\t: ");
    cout << sumNode_1301210461(root);

    printf("\nNumber of Leaves\t: ");
    cout << countLeaves_1301210461(root);

    printf("\nHeight of Tree\t\t: ");
    cout << heightTree_1301210461(root);
    cout << endl << "============================================" << endl;

    return 0;
}
