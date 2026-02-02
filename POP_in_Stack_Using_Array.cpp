#include <iostream>
using namespace std;

#define MAXSTK 5

int main()
{
    int STACK[MAXSTK];
    int TOP = -1;
    int ITEM;

    TOP = TOP + 1;
    STACK[TOP] = 50;

    if (TOP < 0)
    {
        cout << "UNDERFLOW" << endl;
        return 0;
    }

    ITEM = STACK[TOP];
    TOP = TOP - 1;

    cout << "Popped Item: " << ITEM << endl;

    return 0;
}
