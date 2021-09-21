#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int duplicate = n;
    int amstrong = 0;
    while(n>0){
        int rem = n%10;
        amstrong +=(rem*rem*rem);
        n=n/10;
    }
    if(duplicate==amstrong) cout<<"Amstrong";
    else cout<<"Not Amstrong";
    return 0;
}