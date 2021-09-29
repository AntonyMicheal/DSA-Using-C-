//search_binary

#include<iostream>
using namespace std;

int binary_search(int arr[],int size, int k){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]>k){
            end = mid-1;
        } 
        else{
            start = mid+1;
        }
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
    cout<<binary_search(array,n,key);
    return 0;
}