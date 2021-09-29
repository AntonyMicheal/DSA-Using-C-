//search_leniar
#include<iostream>
using namespace std;

int leniar_search(int arr[],int size,int k){
    for(int i=0;i<size;i++){
        if(arr[i]==k) return i;
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cin>>key;
    cout<<leniar_search(array,n,key);
    return 0;
}