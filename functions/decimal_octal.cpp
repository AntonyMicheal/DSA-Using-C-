#include<bits/stdc++.h>
using namespace std;
int dec_octal(int n){
    int octal = 0;
    int base = 1;
    while(base<=n){
        base*=8;
    }
    while (base>0)
    {
        int last_digit = n/base;
        octal = octal*10 + last_digit;
        n-=last_digit*base;
        base/=8;
    }
    return octal;
    
}

int main(){
    int n;
    cin>>n;
    cout<<"Octal equivalent = "<<dec_octal(n);
    return 0;
}