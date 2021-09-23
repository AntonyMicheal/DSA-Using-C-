#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    char c = tolower(ch);//Used to convert input charecter into its lower form.
    switch(c)
    {
        case 'a':
            cout<<"Letter a/A";
            break;
        case 'b':
            cout<<"Letter b/B";
            break;
        default:
            cout<<"Neither a nor B";
            break;
    }
    return 0;
}