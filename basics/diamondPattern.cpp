#include<iostream>
using namespace std;

void diamond(int n){
    int space = n-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
        space--;
    }
    space = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=space; j++){
            cout<<" ";
        }
        for(int j=i; j<n-1; j++){
            cout<<"* ";
        }
        cout<<endl;
        space++;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    diamond(n);
}