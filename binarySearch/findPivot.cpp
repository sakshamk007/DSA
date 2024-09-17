#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int nums[7] ={4,5,6,7,0,1,2};
    int pivot=findPivot(nums, 7);
    cout<<nums[pivot]<<endl;
}