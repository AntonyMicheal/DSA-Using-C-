//sort_insertion

/*
insert the first element from unsorted array to its correct position in the sorted array

its a stable sorting algorithm

works good when the array is partially sorted ie- 3 4 1 5 0 6 7 here 3 4 and 6 7in sorted manner

Best complexity = O(n)
Worst complexity = O(n^2)

adaptive : steps gets reduced if array is sorted, no of swaps reduced compared to bubble sort

working

it first sorts 0-1 index of  an array
    then sorts 0-2 index of array
    then sorts 0-3 index of array
      and upto 0-n index of array

for worst case: array sorted in reverse
number of comparisons on pass 1 = 1 ie- when n = 2 comparison = 1
number of comparisons on pass 2 = 2 ie- when n = 3 comparison = 2

=> n-1 + n-2 + n-3 + ... = n(n+1)/2 => O(n^2)

for best case: array is sorted

eg: 1,2,3,4,5
is 2<1 no break
is 3<2 no break
is 4<3 no break
is 5<4 no break

number of comparisons = 4 => n-1 comparisons => O(n-1) => O(n)

*/
#include<iostream>
using namespace std;

void swap(int array[], int n,int m){
    int temp = array[n];
    array[n] = array[m];
    array[m] = temp;
}

void insertion_sort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j = i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr,j,j-1);
            }
            else{
                break;
            }
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

    insertion_sort(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
