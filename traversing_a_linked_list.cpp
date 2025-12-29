#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

int main()
{
    Node *START, *PTR;
    Node *Node1, *Node2, *Node3;

    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->info = 10;
    Node1->link = Node2;

    Node2->info = 20;
    Node2->link = Node3;

    Node3->info = 30;
    Node3->link = NULL;

    START = Node1;
    PTR = START;

    while (PTR != NULL)
    {
        cout << PTR->info << endl;
        PTR = PTR->link;
    }

    return 0;
}
