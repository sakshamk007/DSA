#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char arr[]){
    int n=getLength(arr);
    int s=0, e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    cout<<"Length is "<<getLength(name)<<endl;
    reverse(name);
    cout<<"Reverse is "<<name;
}