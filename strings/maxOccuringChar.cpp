#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }

    int arr[26]={0};
    int index=0;
    for(int i=0; i<n; i++){
        index=s[i]-'a';
        arr[index]++;
    }

    int maxValue=-1;
    int ans=0;
    for(int i=0; i<26; i++){
        if(maxValue<arr[i]){
            maxValue=arr[i];
            ans=i;
        }
    }
    char maxOccuringChar=ans+'a';
    cout<<maxOccuringChar<<endl;
}