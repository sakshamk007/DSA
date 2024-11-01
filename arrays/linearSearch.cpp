#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1, 99, 0, -11, -22, 30, 5, 4, 3, 90};
    int key;
    cout<<"Enter key: ";
    cin>>key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key Present";
    }
    else{
        cout<<"Key Absent";
    }
}