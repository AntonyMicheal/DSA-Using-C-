//decimal_binary
#include<bits/stdc++.h>
using namespace std;

int dec_binary(int n){
    int decimal = 0;
    int base = 1;
    while(base<n){
        base*=2;
    }
    base/=2;

    while(base>0){
        int rem = n/base;
        decimal = decimal*10 + rem;
        n-=rem*base;
        base/=2;
    }
    return decimal;
}


int main(){
    int n;
    cin>>n;
    cout<<"Binary equivalent of "<<n<<" = "<<dec_binary(n);
    return 0;
}