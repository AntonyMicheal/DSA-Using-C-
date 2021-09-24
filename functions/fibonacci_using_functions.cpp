//fibonacci_using_functions
#include<iostream>
using namespace std;
void fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0;i<n;i++){
        cout<<a<<" ";
        c = a+b;
        a=b;
        b=c;
    }

}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}