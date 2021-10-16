#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int count = 0;
    while(n>0){
        int rem = n%10;
        if(rem==x) count++;
        n/=10;
    }
    cout<<count;
    return 0;
}