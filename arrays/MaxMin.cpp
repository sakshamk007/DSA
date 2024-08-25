#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[], int size){
    int Min = INT_MAX;
    for(int i=0; i<size; i++){
        // if(arr[i]<Min){
        //     Min = arr[i];
        // }
        Min = min(arr[i], Min);
    }
    return Min;
}

int getMax(int arr[], int size){
    int Max = INT_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i]>Max){
        //     Max = arr[i];
        // }
        Max = max(arr[i], Max);
    }
    return Max;
}

int main(){
    int size;
    cin>>size;
    int sum = 0;

    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Minimum: "<<getMin(arr, size)<<endl;
    cout<<"Maximum: "<<getMax(arr, size)<<endl;
    cout<<"Sum: "<<sum<<endl;

}