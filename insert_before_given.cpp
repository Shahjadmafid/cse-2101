#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {10,20,30,40,50}; 
    int n = 5;

    int pos = 3;     
    int value = 100; 

    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = value; 
    n++; 

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
