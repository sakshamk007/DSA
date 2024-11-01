#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,1,1,0,0,0};
    int size=sizeof(arr)/sizeof(int);
    int left=0, right=size-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }        
    }
    for(int e : arr){
        cout<<e<<" ";
    }
}