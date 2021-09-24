//Area_circumference_circle
#include<bits/stdc++.h>
using namespace std;
float area(int r){
    float area_circle = 3.14 * (pow(r,2));
    return area_circle;
}
float circumference(int r){
    float circumference_circle = 2*3.14*r;
    return circumference_circle;
}
int main(){
    int n;
    cin>>n;
    float area_of_circle = area(n);
    float cicumference_of_circle = circumference(n); 
    cout<<setprecision(4);
    cout<<"Area = "<<area_of_circle<<"\nCircumference = "<<cicumference_of_circle;
    return 0;
}