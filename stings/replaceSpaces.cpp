#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    string str="@40";

    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            s.replace(i, 1, str);
        }
    }
    cout<<s;
}