#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        int grade = 0;
        cout<<array[i];
        while(grade<array[i]){
            grade=grade+5;
        }
        cout<<grade;
        if(array[i]<40){
            continue;
        }
        else if((grade - array[i]) < 3){
            array[i]=grade;
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}