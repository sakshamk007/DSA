#include<iostream>
#include <cctype>
using namespace std;

int getLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+32;
    }
    return ch;
}

int main(){
    char arr[100];
    cout<<"Enter string: ";
    cin.getline(arr, 100);
    int n=getLength(arr);
    
    int s=0, e=n-1;
    while(s<=e){
        if(!isalnum(arr[s])){
            s++;
        }
        else if(!isalnum(arr[e])){
            e--;
        }
        else if(toLowerCase(arr[s]) != toLowerCase(arr[e])){
            cout<<"Not a Palindrome";
            return 1;
        }
        else{
            s++;
            e--;
        }
    }
    cout<<"Palindrome";
    return 0;
}