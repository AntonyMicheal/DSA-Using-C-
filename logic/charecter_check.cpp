#include<iostream>
using namespace std;
int main()
{  
char ch;
cout<<"Enter any character: ";
cin>>ch;
 
if(ch>=65&&ch<=90)//65 is ASCII for "A" and 90 is for "Z";
cout<<endl<<"You entered an uppercase character";
else if(ch>=48&&ch<=57)//these are for values from 0->9;
cout<<endl<<"You entered a digit";
else if(ch>=97&&ch<=122)//ASCII for "a"->"z";
cout<<endl<<"You entered a lowercase character";
else
cout<<endl<<"You entered a special character";
return 0;
}
/* charecter stores only a single charecter at a time
    for entering a string use "string";
*/