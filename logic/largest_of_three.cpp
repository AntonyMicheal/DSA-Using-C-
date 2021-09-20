#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a<c){
            cout<<a<<" A is largest";
        }
        else{
            cout<<c<<" C is largest";
        }
    }
    else if(b>c){
        cout<<b<<" B is largest";
    }
    else{
        cout<<c<<" C is largest";
    }
    return 0;
}