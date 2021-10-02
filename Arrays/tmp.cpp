#include<bits/stdc++.h>
using namespace std;
void swap(int array[], int n){
    int temp = array[2];
    array[2] = array[3];
    array[3] = temp;
}


int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    swap(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}