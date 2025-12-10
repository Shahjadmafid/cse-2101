#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n-1; i++)  
        arr[i] = arr[i+1];

    n--; 

    for(int i = 0; i < n; i++)   
        cout << arr[i] << " ";
    
    cout << endl;
}
