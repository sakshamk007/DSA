#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr2[6] = {9, 8, 7, 6, 5, 4};
    swapAlternate(arr1, 9);
    swapAlternate(arr2, 6);
    printArray(arr1, 9);
    cout<<endl;
    printArray(arr2, 6);
}