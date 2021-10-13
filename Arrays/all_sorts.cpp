//all_sorts

/*
> bubble sort 
    
    also known as inplace sorting algo, exchange algorithm
    ad its a stable sorting algorithm.

    repeatedly swap the elements if they are not in the correct order.
    at end of one iteration we will get the maximum element at the end.
    or at the begining based on the way we do it.

    best case complexity: O(n) where n = number of elements.
    Worst case complexity:O(n) eg: reversed array.

    Steps:
    >insert array
    >check whether the adjacent elements are in order or not
    >ie- a[i]>a[i+1]
    >if not in order swap them
    >now repeat the step check the new i(old i if i was greater) with the next i+1
    >else increment i then check


    eg: 1 2 3 4 5 6 7 8 9 10
    1-2, 2-3, 3-4, 4-5, 5-6, 6-7, 7-8, 8-9, 9-10
    
    as we can see its comparing all and every element.
    since its a sorted array its our best case O(n).

> selection sort

    select the element and place it in its correct position.
    As the name suggests it select either the maximum or minumum value of an array and puts
    it in its right position (index).

    Selection sort works well on small arrays

    eg: 
    a = [6, 1, 2, 0, 3]
    here we will replace 3 with 6 since its 6's place.

    its not a stable sorting algorithm.

    for details refer sort_selection.

> insertion sort
    insert the first element from unsorted array to its correct position in the sorted array

    its a stable sorting algorithm

    works good when the array is partially sorted ie- 3 4 1 5 0 6 7 here 3 4 and 6 7in sorted manner

    Best complexity = O(n)
    Worst complexity = O(n^2)
    working

    it first sorts 0-1 index of  an array
    then sorts 0-2 index of array
    then sorts 0-3 index of array
    and upto 0-n index of array


*/

#include<iostream>
using namespace std;

//to swap two elements used in all three sorting.

void swap(int arr[],int j, int k){

    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}

//bubble sorting core.

void bubble_sort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
}

//used in selection sort.

int max_index(int array[], int n){
    int mx = 0;
    for(int i=0;i<n;i++){
        if(array[mx]<array[i]){
            mx = i;
        }
    }
    return mx;
}

//selection sort core

void selection_sort(int *arr, int n){
    for(int i=0;i<n;i++){
        int last = n-i-1;
        int max = max_index(arr,last);
        if(arr[max]>arr[last]){
            swap(arr,max,last);
        }
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
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

    //bubble_sort(array,n);
    //selection_sort(array,n);
    insertion_sort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}