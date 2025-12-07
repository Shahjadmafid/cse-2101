#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,2,4,2,4,7,9,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++){
        if(arr[j]==arr[i])
        break;
    }
    if(j==i){
        cout<<arr[i]<<" ";
    }

    }
    return 0;

}