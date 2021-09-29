#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,index;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>index;
    for(int i=index;i<n;i++){
        arr[i] = arr[i+1];
    }

    for(int j=0;j<n-1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
