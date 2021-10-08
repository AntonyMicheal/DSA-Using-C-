#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int array[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int k;
    cout<<"Enter key to search: ";
    cin>>k;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(array[i][j]==k){
                cout<<"Array present at location: Array["<<i<<"]["<<j<<"]";
                
            }
        }
    }
    return 0;
}