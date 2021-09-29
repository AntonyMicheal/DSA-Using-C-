//inseartion_at_different_indexes
#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int size,int index,int element){
    int temp;
    for(int i=size;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    cout<<"Elements afer insertion: ";
    for(int i=0;i<size+1;i++){
        cout<<arr[i]<<" ";
    }
}

void deletion(int arr[],int size, int index){
    for(int i=index;i<size;i++){
        arr[i] = arr[i+1];
    }

    for(int j=0;j<size-1;j++){
        cout<<arr[j]<<" ";
    }
}



int main(){
    int n,key;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int ch;
    
    while(true){
        cout<<"\nEnter your choice:\n1.Insert at specific index\n2.Delete from specific indexes: ";
        cin>>ch;
        char choice;
        switch(ch){
            case 1:
                int index,element;
                cout<<"Enter the index to insert element:";
                cin>>index;
                cout<<"Enter the element to be inserted: ";
                cin>>element;
                insertion(array,n,index,element);
                break;

            case 2:
            int index2;
            cout<<"Enter the index to delete element:";
            cin>>index;
            deletion(array,n,index2);
            break;
            default:
            cout<<"Invalid choice!! would you like to continue?:(y/n)";
            cin>>choice;
        }
        char c = tolower(choice);
        if(c=='n'){
            break;
        }
    }
    return 0;
}
