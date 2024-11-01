#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    cout<<"Enter elements in 2D array"<<endl;
    int arr[3][4];
    // int arr[3][4]={9,8,7,6,5,4,3,2,1,1,2,3};
    // int arr[3][4]={{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    if(isPresent(arr, target, 3, 4)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}