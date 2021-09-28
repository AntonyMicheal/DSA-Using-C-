            //binary_addition

#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    return rev;
}


int binary_add(int a, int b){
    int prev_carry = 0;
    int binary = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            binary = binary*10 + prev_carry;
            prev_carry = 0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prev_carry==1){
                binary = binary*10 + 0;
                prev_carry = 1;
            }
            else{
                binary = binary*10 + 1;
                prev_carry = 0;
            }
        }   
        else{
            binary = binary*10 + prev_carry;
            prev_carry = 1;    
        }
        a/=10;
        b/=10;
    }
    
    while(a>0){
        
        if(prev_carry==1){
            if(a%2==1){
                binary = binary*10+0;
                prev_carry = 1;
            }
            else{
                binary = binary*10 + 1;
                prev_carry = 0;
            }
        }
        else{
            binary = binary*10+(a%2);
        }
        a/=10;
    }

        while(b>0){
        
        if(prev_carry==1){
            if(b%2==1){
                binary = binary*10+0;
                prev_carry = 1;
            }
            else{
                binary = binary*10 + 1;
                prev_carry = 0;
            }
        }
        else{
            binary = binary*10+(b%2);
        }
        b/=10;
    }

    if(prev_carry==1){
        binary = binary*10+1;
    }
    else{
        binary=binary*10+0;
    }
    

    binary = reverse(binary);
    return binary;
    
}



int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum of binary = "<<binary_add(a,b);
    return 0;
}