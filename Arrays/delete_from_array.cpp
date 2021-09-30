#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int index;
    cout<<"Enter index:";
    cin>>index;
    for(int i=index;i<n-1;i++){
        array[i] = array[i+1];
    }

    for(int i=0;i<n-1;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}