#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int x[n];
    
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    int y[m];
    for(int i=0;i<m;i++){
        cin>>y[i];
    }

    int z[n+m];

    for(int i=0;i<n+m;i++){
        if(i<n){
            z[i] = x[i];
        }
        else{
            z[i] = y[i-m];
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<z[i]<<" ";
    }
    return 0;
}