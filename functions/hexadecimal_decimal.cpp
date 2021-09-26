//hexadecimal_decimal
#include<iostream>
using namespace std;
int hex_decimal(string n)
{
    int size = n.size();
    int decimal = 0;
    int base = 1;
    while(size>0){
        if(n[size-1]>='A' && n[size-1]<='F'){
            decimal+= base * (n[size-1] - 'A'+10);
        }
        else if(n[size-1]>='0' && n[size-1]<='9')  {
            decimal+= base * (n[size-1] -'0');
        }
        base*=16;
        size --;
    }
    return decimal;

}

int main(){
    string n;
    cin>>n;
    cout<<"decimal equivalant = "<<hex_decimal(n);
}
