#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int size = 5;
    int arr[n] = {10,20,30,40,50};

    int pos = 0;
    int value = 100;

    for(int i=5;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    n++;

    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<< " ";
    }

}