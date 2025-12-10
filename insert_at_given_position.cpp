#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};

    int pos = 3;     
    int value = 100; 

    for(int i = 5; i >= pos; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = value;

    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}
