#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int item = 4;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            cout << "Data found at index " << i << endl;
            return 0;
        }
    }

    cout << "Data not found" << endl;

    return 0;
}
