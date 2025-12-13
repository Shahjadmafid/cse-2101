#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int pos = 3; 

    for(int i = pos; i < 5; i++)
        a[i] = a[i+1];

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
