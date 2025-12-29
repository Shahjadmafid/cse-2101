#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

int main()
{
    Node *START, *PTR, *SAVE, *LOC;
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

    if (START == NULL)
    {
        LOC = NULL;
    }
    else if (ITEM < START->info)
    {
        LOC = NULL;
    }
    else
    {
        SAVE = START;
        PTR = START->link;

        while (PTR != NULL)
        {
            if (ITEM < PTR->info)
            {
                LOC = SAVE;
                break;
            }
            SAVE = PTR;
            PTR = PTR->link;
        }

        if (PTR == NULL)
        {
            LOC = SAVE;
        }
    }

    if (LOC != NULL)
        cout << "LOC contain INFO: " << LOC->info << endl;
    else
        cout << "LOC is NULL" << endl;

    return 0;
}
