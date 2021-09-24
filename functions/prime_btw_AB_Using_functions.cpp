//prime_btw_AB_Using_functions
#include<bits/stdc++.h>
using namespace std;
bool prime_or_not(int n){

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
            break;
            
        }
    }
    return true;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime_or_not(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}