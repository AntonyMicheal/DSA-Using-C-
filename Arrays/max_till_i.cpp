//max_till_i

#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(array[i]>max){
//             max = array[i];
//         }
//         cout<<max<<" ";
//     }
//     return 0;
// }

int main()
{
    int n,i;
    cin>>n;
    int max = INT_MIN;
    while(n--){
        cin>>i;
        if(i>max){
            max = i;
        }
        cout<<max<<" ";
    }
    return 0;
}