//swap_two_indexes

#include<iostream>
using namespace std;
void swap(int array[],int size,int a,int b){
    for(int i=0;i<size;i++){
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter Array elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int a,b;
    cout<<"Enter two indexes: ";
    cin>>a>>b;
    swap(array,n,a,b);
    return 0;
}