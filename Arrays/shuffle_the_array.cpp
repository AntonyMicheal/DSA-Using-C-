//shuffle_the_array
#include<iostream>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    int loc = 0;
    for(int i=0;i<n;i++){
        if(array[i]==k){
            loc = i;
            break;
        }
    }
    int j=0, m=loc,array2[n];
    for(int i=0;i<n;i++){
        if(i%2==0){
            array2[i] = array[j];
            j++;
        }
        else{
            array2[i] = array[m];
            m++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<array2[i]<<" ";
    }
    return 0;
}

/*
//shuffle_the_array
#include<iostream>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    int loc = 0;
    for(int i=0;i<n;i++){
        if(array[i]==k){
            loc = i;
            break;
        }
    }
    int loc2 = loc;
    int arr[n/2];
    int arr2[n/2];
    int array2[n];
    for(int i=0;i<n;i++){
        if(i<loc){
            arr[i] = array[i];
        }
        else{
            arr2[i-loc] = array[loc2];
            loc2++;
        }
        
    }
    int j=0,m=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            array2[i] = arr[m];
            m++;
        }
        else{
            array2[i] = arr2[j];
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<array2[i]<<" ";
    }
    return 0;
}
*/