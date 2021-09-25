//pythagorian_triplet

#include<bits/stdc++.h>
using namespace std;
bool pythagorian(int a, int b, int c){
    int x = max(a,max(b,c));
    int y,z;
    if(a==x){
        y=b;
        z=c;
    }
    else if(b==x){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }

    if(a*a== b*b + c*c) return true;
    else return false;

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(pythagorian(a,b,c)){
        cout<<"Pythagorian Triplet";
    }
    else cout<<"Not pythagorian triplet";
    return 0;
}