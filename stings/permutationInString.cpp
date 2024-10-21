#include<iostream>
#include<string>
using namespace std;

bool found(int arr1[], int arr2[]){
    for(int i=0; i<26; i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}    

int main() {
    string s1="ab";
    string s2="eidbaoo";

    int n1=s1.length();
    int n2=s2.length();

    int count1[26]={0};
    int index=0, i=0;
    for( ; i<n1; i++){
        index=s1[i]-'a';
        count1[index]++;
    }
    index=0;
    i=0;

    int count2[26]={0};
    while(i<n1 && i<n2){
        index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(found(count1, count2)){
        return 0;
    }

    int newIndex=0;
    int oldIndex=0;
    while(i<n2){
        newIndex=s2[i]-'a';
        count2[newIndex]++;
        oldIndex=s2[i-n1]-'a';
        count2[oldIndex]--;
        if(found(count1, count2)){
            return 0;
        }
        i++;
    }
    return 1;
}