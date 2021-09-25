//octal_decimal

#include<iostream>
using namespace std;
int oct_decimal(int n){
    int dec = 0;
    int base = 1;
    while(n>0){
        int rem = n%10;
        dec += rem*base;
        base*=8;
        n/=10;
    }
    return dec;
}
int main(){
    int n;
    cin>>n;
    cout<<"decimal equivalant = "<<oct_decimal(n);
}