#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

int main()
{
    Node *START, *AVAIL, *NEW;
    Node *Node1, *Node2, *Node3;
    int ITEM;

    Node1 = new Node();
    Node2 = new Node();

    Node1->info = 20;
    Node1->link = Node2;

    Node2->info = 30;
    Node2->link = NULL;

    START = Node1;

    Node3 = new Node();
    Node3->link = NULL;
    AVAIL = Node3;

    ITEM = 10;

    if (AVAIL == NULL)
    {
        cout << "OVERFLOW" << endl;
        return 0;
    }

    NEW = AVAIL;
    AVAIL = AVAIL->link;

    NEW->info = ITEM;

    NEW->link = START;
    START = NEW;

    cout << "List after insertion:" << endl;
    Node *PTR = START;

    while (PTR != NULL)
    {
        cout << PTR->info << endl;
        PTR = PTR->link;
    }

    return 0;
}
