#include <iostream>
using namespace std;

int main() {
    int LB = 0, UB = 4;               
    int arr[5] = {1, 2, 3, 4, 5};    

    for(int k = LB; k <= UB; k++) {
        cout << arr[k] << " ";        
    }

    cout << endl;                      
    return 0;
}