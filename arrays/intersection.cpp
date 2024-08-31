#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 2 pointer approach
    int size1=6;
    int size2=6;
    int arr1[6] = {1,2,2,3,5,6};
    int arr2[6] = {0,2,2,3,4,6};
    int i=0, j=0;
    vector<int> ans;
    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int element : ans){
        cout<<element<<" ";
    }
}