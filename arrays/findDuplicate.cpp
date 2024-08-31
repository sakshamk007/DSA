#include<iostream>
using namespace std;

int main(){
    int size=9;
    int arr[9]={1,2,6,3,4,5,6,7,8};
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<size; i++){
        ans=ans^i;
    }
    cout<<ans<<endl;
}