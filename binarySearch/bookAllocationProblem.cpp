#include<iostream>
using namespace std;

int possible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum=0;
    for(int i=0; i<n; i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int main(){
    int arr[4] = {10,20,30,40};
    int n=4, m=2;

    int s=0;
    int sum=0;
    for(int i : arr){
        sum+=i;
    }
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(possible(arr, n, m, mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<endl;
}