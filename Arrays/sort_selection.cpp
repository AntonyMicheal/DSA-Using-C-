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

best case = O(n^2) -> even when the array is sorted it still checks whether the order is
correct or not.
1 2 3 4 5
1<2 1<3 1<4 ,1<5 = 1 is sorted
2<3 2<4 2<5      = 1 2 is sorted
3<4 3<5          = 1 2 3 is sorted
4<5              = 1 2 3 4 is sorted
5                = 1 2 3 4 5
n-1+n-2+n-3_n-4 => n(n+1)/2 => n-1(n-1 + 1)/2 => (do the math) =>O(n^2)

worst case = O(n^2)




*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *arr, int n, int m){
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}

int max_index(int *arr, int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    return max;
}

void selection_sort(int array[], int n){
    for(int i=0;i<n;i++){
        int last = n-i-1;
        int max = max_index(array,last);
        if(array[last]<array[max]){
            swap(array,last,max);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    selection_sort(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(array[i]>array[j]){
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