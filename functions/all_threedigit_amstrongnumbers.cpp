//all_threedigit_amstrongnumbers
#include<bits/stdc++.h>
using namespace std;
bool amstrong(int n){
    int amstrong_value = 0;
    int dupe = n;
    while(n>0){
        int rem = n%10;
        amstrong_value +=(rem*rem*rem);
        n=n/10;
    }
    if(dupe==amstrong_value) return true;
    else return false;
}
int main(){
    for(int i=100;i<1000;i++){
        if(amstrong(i)) cout<<i<<" ";
    }
    return 0;
}