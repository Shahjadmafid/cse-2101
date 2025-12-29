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

    Node1->info = 10;
    Node1->link = Node2;

    Node2->info = 20;
    Node2->link = Node3;

    Node3->info = 30;
    Node3->link = NULL;

    START = Node1;

    ITEM = 25;   

    PTR = START;
    LOC = NULL;  
    while (PTR != NULL)
    {
        if (ITEM < PTR->info)
        {
            LOC = NULL;
            break;
        }
        else if (ITEM == PTR->info)
        {
            LOC = PTR;
            break;
        }
        else
        {
            PTR = PTR->link;
        }
    }

    if (PTR == NULL)
    {
        LOC = NULL;
    }

    if (LOC != NULL)
        cout << "Item " << ITEM << " found in the list." << endl;
    else
        cout << "Item " << ITEM << " not found in the list." << endl;

    return 0;
}
