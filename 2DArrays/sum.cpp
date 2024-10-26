#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[3][3] = {3,4,11,2,12,1,7,8,7};
    int maxi=INT_MIN;
    int rowIndex;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
        cout<<"Sum = "<<sum<<endl;
    }
    cout<<"Row "<<rowIndex<<" has maximum sum "<<maxi<<endl;;
}