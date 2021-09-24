//Gread_calculator

#include<bits/stdc++.h>
using namespace std;
void grade_calculator(int n){
    switch(n){
        case 10:
        cout<<"AA";
        break;
        case 9:
        cout<<"AA";
        break;
        case 8:
        cout<<"AB";
        break;
        case 7:
        cout<<"BB";
        break;
        case 6:
        cout<<"BC";
        break;
        case 5:
        cout<<"CD";
        break;
        case 4:
        cout<<"DD";
        break;
        default:
        cout<<"fail";
    }
}
int main(){
    cout<<"Enter marks for 5 subjects: ";
    int m1,m2,m3,m4,m5;
    cin>>m1>>m2>>m3>>m4>>m5;
    int total_marks = m1+m2+m3+m4+m5;
    cout<<"Total Mark: "<<total_marks<<endl;
    int percentage = total_marks/5;
    cout<<"Percentage: "<<percentage<<endl;
    grade_calculator(percentage/10);
    return 0;
}