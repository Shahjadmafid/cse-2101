#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

int main()
{
    Node *START, *PTR, *LOC;
    Node *Node1, *Node2, *Node3;
    int ITEM;

    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->info = 1;
    Node1->link = Node2;

    Node2->info = 2;
    Node2->link = Node3;

    Node3->info = 3;
    Node3->link = NULL;

    START = Node1;

    ITEM = 2;  

    PTR = START;
    LOC = NULL; 

    while (PTR != NULL)
    {
        if (ITEM == PTR->info)
        {
            LOC = PTR;
            break;
        }
        PTR = PTR->link;
    }

    if (LOC != NULL)
    {
        cout << "Item " << ITEM << " found in the list." << endl;
    }
    else
    {
        cout << "Item " << ITEM << " not found in the list." << endl;
    }

    return 0;
}
