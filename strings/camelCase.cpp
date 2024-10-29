#include<iostream>
#include<string>
using namespace std;

bool isvalid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        return 1;
    }
    return 0;
}

char toupper(char ch){
    if(ch>='a' && ch<='z'){
        return ch-32;
    }
    return ch;
}

int main(){
    string s = "convert-0to_camel";
    for(int i=0; i<s.length(); i++){
        while(!isvalid(s[i])){
            s.erase(i, 1);
            char ch=toupper(s[i]);
            s[i]=ch;
        }
    }
    cout<<s;
}