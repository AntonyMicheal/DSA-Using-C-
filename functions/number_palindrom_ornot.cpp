//number_palindrom_ornot

#include<bits/stdc++.h>
using namespace std;
int palindrome_or_not(int n){
    int pal=0;
    for(int i=n;i>0;i/=10){
        int rem = i%10;
        pal = pal*10+rem;
    }
    return pal;
}

int main(){
    int n;
    cin>>n;
    if(palindrome_or_not(n) ==n ){
        cout<<"NUMBER IS A PALINDROME";
    }
    else{
        cout<<"NOT A PALINDROME";
    }
    return 0;
}