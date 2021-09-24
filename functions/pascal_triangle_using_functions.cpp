//pascal_triangle_using_functions
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pascal(n);
    return 0;
}