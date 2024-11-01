#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int s=0, e=n;
    double ans=0;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n){
            ans=mid;
            break;
        }
        else if(square>n){
            e=mid-1;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
    }
    int precision=0;
    cout<<"Enter precision: ";
    cin>>precision;
    double factor=1;
    for(int i=0; i<precision; i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    cout<<ans<<endl;
}