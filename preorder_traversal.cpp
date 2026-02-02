#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node* left;
    Node* right;
};

Node* createNode(int value)
{
    Node* newNode = new Node();
    newNode->info = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void Preorder(Node* root)
{
    if (root == NULL)
        return;

    cout << root->info << " ";

    Preorder(root->left);
    Preorder(root->right);
}

int main()
{
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    cout << "Preorder Traversal: ";
    Preorder(root);

    return 0;
}
