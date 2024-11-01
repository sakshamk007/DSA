#include<iostream>
using namespace std;

int main(){
    int arr[9]={0,1,2,0,1,1,2,1,0};
    int size=sizeof(arr)/sizeof(int);
    int left=0, right=size-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==2){
            right--;
        }
        else if(arr[left] > arr[right]){
            swap(arr[left], arr[right]);
        }
        else if(arr[left]==arr[right]){
            swap(arr[left], arr[left+1]);
            swap(arr[right], arr[right-1]);
            left++;
            right--;
        }
    }    
}