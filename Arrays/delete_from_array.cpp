#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"\n";
    cin>>k;


    for(int i=0;i<n;i++){
        if(array[i]==k){
            for(int j=i;j<n;j++){
                array[j] = array[j+1];
            }
        }
    }

    for(int i=0;i<n-1;i++){
        cout<<" "<<array[i];
    }
    
    return 0;
}