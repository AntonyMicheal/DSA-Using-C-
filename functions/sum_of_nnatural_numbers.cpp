//sum_of_nnatural_numbers

#include<bits/stdc++.h>
using namespace std;
int sum_natural(int n){
    int sum = n*(n+1)/2;
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_natural(n);
    return 0;
}