#include <iostream>
using namespace std;

int main(){
    // int i = 0;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // while (i<n){
    //     int j = 0;
    //     while (j<n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // while (i<=n){
    //     int j=0;
    //     while (j<n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int k=1;
    // while (i<=n){
    //     int j=1;
    //     while (j<=n){
    //         cout<<k;
    //         j++;
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // while (i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // while (i<=n){
    //     int j=1;
    //     int k=i;
    //     while (j<=i){
    //         cout<<k;
    //         j++;
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1;
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // while (i<=n){
    //     int j=1;
    //     while (j<=i){
    //         cout<<i-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     char c='A';
    //     int j=1;
    //     while (j<=n){
    //         char ch=c+i-1;
    //         cout<<ch;
    //         j++;
    //         c++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     char c='A';
    //     int j=1;
    //     while (j<=n){
    //         char ch=c+i-1;
    //         cout<<ch;
    //         j++;
    //         c++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // int count=1;
    // while (i<=n){
    //     int j=1;
    //     int k=1;
    //     while (k<=i-1){
    //         cout<<" "; 
    //         k++;
    //     }
    //     while (j<=n-i+1){
    //         cout<<count;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //     count++;
    // }
    
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // int count=1;
    // while (i<=n){
    //     int j=1;
    //     int k=1;
    //     while (k<=n-i){
    //         cout<<" "; 
    //         k++;
    //     }
    //     while (j<=i){
    //         cout<<count;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //     count++;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     int count=1;
    //     int j=1;
    //     int k=1;
    //     while (k<=i-1){
    //         cout<<" "; 
    //         k++;
    //     }
    //     while (j<=n-i+1){
    //         cout<<count+i-1;
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     int count1=1;
    //     int count2=1;
    //     int j1=1;
    //     int j2=1;
    //     int k1=1;
    //     int k2=1;
    //     while (k1<=n-i){
    //         cout<<" "; 
    //         k1++;
    //     }
    //     while (j1<=i){
    //         cout<<count1;
    //         j1++;
    //         count1++;
    //     }
    //     while (j2<=i-1){
    //         cout<<i-count2;
    //         j2++;
    //         count2++;
    //     }
    //     while (k2<=n-i){
    //         cout<<" "; 
    //         k2++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1;
    while (i<=n){
        int count1=1;
        int count2=1;
        int j1=1;
        int j2=1;
        int k1=1;
        int k2=1;
        while (k1<=n-i+1){
            cout<<k1; 
            k1++;
        }
        while (j1<=i-1){
            cout<<"*";
            j1++;
        }
        while (j2<=i-1){
            cout<<"*";
            j2++;
        }
        while (k2<=n-i+1){
            cout<<n-k2-i+2; 
            k2++;
            count1++;
        }
        cout<<endl;
        i++;
    }
}