#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr1[5] = {1, 2, 3, 9, 8};
    int arr2[6] = {99, 11, 88, 22, 77, 33};

    reverse(arr1, 5);
    reverse(arr2, 6);

    printArray(arr1, 5);
    cout<<endl;
    printArray(arr2, 6);
}