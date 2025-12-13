#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    for(int i = 2; i < 4; i++)
        a[i] = a[i+1];

    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
}
