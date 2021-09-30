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
    int index,element;
    cout<<"Enter index:";
    cin>>index;
    cout<<"Enter new element: ";
    cin>>element;

    for(int j=n;j>=index;j--){
        array[j+1] = array[j];
    }
    array[index] = element;
    for(int i=0;i<n+1;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}