#include<iostream>
using namespace std;

int reverseArray(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int odd[5]={11,7,3,12,4};
    int even[6]={2,8,9,5,1,7};
    reverseArray(odd, 5);
    printArray(odd, 5);
    cout<<endl;
    reverseArray(even, 6);
    printArray(even, 6);
}