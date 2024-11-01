#include<iostream>
using namespace std;

int main(){
    int size=7;
    int arr[7] = {4,6,6,5,5,4,1};
    int ans=0;;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}