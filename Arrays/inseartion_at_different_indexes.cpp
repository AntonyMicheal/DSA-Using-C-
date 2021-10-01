#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n+1];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int index,element;
    cin>>index>>element;
    for(int i = n;i>=index;i--){
        array[i+1] = array[i]; 
    }
    array[index] = element;

    for(int i = 0;i<n+1;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}