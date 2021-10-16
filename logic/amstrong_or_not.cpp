#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d = n;
    int amstrong=0;
    for(int i=n;i>0;i/=10){
        int rem = i%10;
        amstrong += (rem*rem*rem);
    }
    if(amstrong==d){
        cout<<"is an amstrong";
    }
    else{
        cout<<"is not an amstrong";
    }
    return 0;
}