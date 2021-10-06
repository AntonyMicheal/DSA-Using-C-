#include<bits/stdc++.h>
using namespace std;

// string dec_hex(int s){
//     string hexa = "";
//     int base = 1;
//     while(base<=s){
//         base*=16;
//     }
//     base/=16;

//     while(base>0){
//         int last_digit = s/base;
//         s-= last_digit*base;
//         base/=16;
//         if(last_digit<=9){
//             hexa += to_string(last_digit);
//         }
//         else{
//             char c = 'A'+last_digit - 10;
//             hexa.push_back(c);
//         }
//     }
//     return hexa;
// }
string dec_hex(int n){
    string s ="";
    int base = 1;
    
    while(base<=n){
        base*=16;
    }
    base/=16;
    while(base>0){

        int rem = n/base;
        n-=rem*base;
        base/=16;
        if(rem<=9){
            s+= to_string(rem);
        }
        else{
            char c = 'A'+rem - 10;
            s.push_back(c);
        }
        
    }
    return s;
}


int main(){
    int s;
    cin>>s;
    cout<<"Hexa decimal equivalent = "<<dec_hex(s);
    return 0;
}