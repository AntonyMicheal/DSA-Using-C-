/*Bubble sort

space complexity O(1) means no extra spaces required ie- copying of array is not necessary

also known as inplace sorting algo, exchange algorithm

Time Complexity: 

Best case: O(n) => when array is sorted
Worst case: O(n^2) => when array is reversly sorted

lets consider "n" as number of comparisons then in each of the above cases if we take
"n"=10
Best case = 9 comparisons
Worst case = 100 comparisons

as we can see as the input grows number of comparison grows ie- time of comparison also grows

In best case the number of comparisons is 9 is because it only checks till 9th
*/

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
        for(int j=0;j<n-i-1;j++){  //this loop decides till where should each iteration swap.
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}