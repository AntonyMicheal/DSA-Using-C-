//sort_selection

/*


As the name suggests it select either the maximum or minumum value of an array and puts
it in its right position (index).

Selection sort works well on small arrays

selection sort is not a stable sorting algorithm.

ie-
4 3 2 1 0
 array: 0 4
 array: 1 3
 array: 1 2
 array: 0 1
 array: 0 0
0 1 2 3 4
PS C:\Users\admin\fun_dsa\arrays> ./sort_selection
5

5 4 3 2 1
            maxvalue  lastindex
 array before: 5        1           5 4 3 2 1
 swap: 1 5                          1 4 3 2 5
 array before: 4        2           1 4 3 2 5
 swap: 2 4                          1 2 3 4 5
 array before: 2        3           1 2 3 4 5
 swap: 2 3                          1 2 3 4 5                         
 array before: 1        2           1 2 3 4 5
 swap: 1 2                          1 2 3 4 5
 array before: 1        1           1 2 3 4 5
 swap: 1 1                          1 2 3 4 5

 1 2 3 4 5

Bset and Worst case time complexities are same

best case = O(n^2) -> searching for maximum value makes it run n^2 times
worst case = O(n^2)




*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *array, int x, int last){
    int temp = array[x];
    array[x] = array[last];
    array[last] = temp;
}

int get_max_index(int array[],int n){
    int start = 0;
    for(int i=0;i<n;i++){
        if(array[start]<array[i]){
            start = i;
        }

    }
    return start;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        int last = n-i-1;
        int x = get_max_index(array,last);
        if(array[x]>array[last]){
            swap(array,x,last);
        }
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}


// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }

//     for(int i=n-1;i>=0;i--){
//         for(int j = i-1;j>=0;j--){
//             if(array[i]<array[j]){
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }

//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

