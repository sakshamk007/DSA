#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[7]={10,1,7,4,8,2,11};
    // selectionSort(arr, 7);
    // bubbleSort(arr, 7);
    // insertionSort(arr, 7);
    printArray(arr, 7);
}