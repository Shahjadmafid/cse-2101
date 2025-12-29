#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

int main()
{
    Node *START, *AVAIL, *NEW, *LOC;
    Node *Node1, *Node2, *Node3;
    int ITEM;

    Node1 = new Node();
    Node2 = new Node();

    Node1->info = 10;
    Node1->link = Node2;

    Node2->info = 30;
    Node2->link = NULL;

    START = Node1;

    Node3 = new Node();
    Node3->link = NULL;
    AVAIL = Node3;

    LOC = Node1;  
    ITEM = 20;

    if (AVAIL == NULL)
    {
        cout << "Overflow" << endl;
        return 0;
    }

    NEW = AVAIL;
    AVAIL = AVAIL->link;

    NEW->info = ITEM;

    if (LOC == NULL)
    {
        NEW->link = START;
        START = NEW;
    }
    else
    {
        NEW->link = LOC->link;
        LOC->link = NEW;
    }

    Node *PTR = START;
    while (PTR != NULL)
    {
        cout << PTR->info << " ";
        PTR = PTR->link;
    }

    return 0;
}
