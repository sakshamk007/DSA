#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int col=0; col<3; col++){
        if(col&1){
            for(int row=2; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0; row<3; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}