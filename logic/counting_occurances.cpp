#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int count = 0;
    for(int i=n;i>0;i/=10){
        int tem = i%10;
        if(tem == x){
            count++;
        }
    }
    cout<<count;
    return 0;
}