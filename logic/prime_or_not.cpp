#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int i;
    for(i = 2;i<m;i++){
        if(m%i==0){
            break;
        }
    }
    if(i==m) cout<<"prime";
    else cout<<"not Prime";
    return 0;
}