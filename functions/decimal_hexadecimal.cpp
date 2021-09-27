#include<bits/stdc++.h>
using namespace std;

string dec_hex(int s){
    string hexa = "";
    int base = 1;
    while(base<=s){
        base*=16;
    }
    base/=16;

    while(base>0){
        int last_digit = s/base;
        s-= last_digit*base;
        base/=16;
        if(last_digit<=9){
            hexa += to_string(last_digit);
        }
        else{
            char c = 'A'+last_digit - 10;
            hexa.push_back(c);
        }
    }
    return hexa;
}
int main(){
    int s;
    cin>>s;
    cout<<"Hexa decimal equivalent = "<<dec_hex(s);
    return 0;
}