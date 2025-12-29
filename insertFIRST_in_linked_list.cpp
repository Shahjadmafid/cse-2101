#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node* link;
};

int main()
{
    Node *START = NULL; // linked list initially empty

    // node 1
    Node *n1 = new Node;
    n1->info = 1;
    n1->link = NULL;
    START = n1;  // first node

    // node 2
    Node *n2 = new Node;
    n2->info = 2;
    n2->link = NULL;
    n1->link = n2;

    
    Node *n3 = new Node;
    n3->info = 3;
    n3->link = NULL;
    n2->link = n3;

    // Traversal
    Node *PTR = START;
    while(PTR != NULL)
    {
        cout << PTR->info << " ";
        PTR = PTR->link;
    }

    return 0;
}
