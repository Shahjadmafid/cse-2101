#include <iostream>
using namespace std;

#define MAXSTK 5

int main() {
    int STACK[MAXSTK];
    int TOP = -1;
    int ITEM = 25;

    if(TOP == MAXSTK - 1) {
        cout << "OVERFLOW\n";
        return 0;
    }

    TOP++;
    STACK[TOP] = ITEM;

    cout << "Stack After Push:\n";
    for(int i = 0; i <= TOP; i++) {
        cout << STACK[i] << " ";
    }
    cout << "\n";

    return 0;
}
