#include<bits/stdc++.h>
using namespace std;

int hex_decimal(string s){
    int decimal = 0;
    int size = s.size();
    int base = 1;
    while(size>0){
        if(s[size-1]>='A' && s[size-1]<='F'){
            decimal+= base * (s[size-1] - 'A'+10);
        }
        else if(s[size-1]>='0' && s[size-1]<='9')  {
            decimal+= base * (s[size-1] -'0');
        }
        size --;
        base*=16;
        }
    return decimal;
}

int main(){
    string s;
    cin>>s;
    cout<<"Decimal equivalent Hex = "<<hex_decimal(s);
    return 0;
}



/*
    
for(int i=size-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            decimal += base* (s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F'){
            decimal+= base*(s[i]-'A'+10);
        }
        base*=16;
        }

*/
