//binary_decimal

#include<bits/stdc++.h>
using namespace std;

int binary_dec(int n){
    int decimal = 0;
    int base = 1;
    while(n>0){
        int rem = n%10;
        decimal += rem*base;
        base*=2;
        n/=10;
    }
    return decimal;
}


int main(){
    int n;
    cin>>n;
    cout<<"Decimal value for "<<n<<" ="<<binary_dec(n);
    return 0;
}