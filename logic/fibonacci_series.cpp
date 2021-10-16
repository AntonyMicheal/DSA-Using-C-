#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=0;
    while(c<=n){
        cout<<a<<" ";
        c = a+b;
        a = b;
        b=c;
    }
    return 0;
}