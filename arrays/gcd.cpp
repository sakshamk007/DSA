#include<iostream>
#include<climits>
using namespace std;

int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else if(b>a){
            b=b-a;
        }
    }
    return a;
}

int main() {
    int nums[5]={2,5,6,9,10};
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<5; i++){
        if(nums[i]>maxi){
            maxi=nums[i];
        }
        if(nums[i]<mini){
            mini=nums[i];
        }
    }
    cout<<gcd(mini, maxi)<<endl;
}
