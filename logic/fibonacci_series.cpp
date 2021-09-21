#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 1;
    int c = 0;
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){

        cout<<a<<" ";
        c = a+b;
        a = b;
        b = c;
        
    }
    return 0;
}