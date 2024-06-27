#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         ans = (bit * pow(10, i) + ans);
//         i++;
//         n = n>>1;
//     }
//     cout<<ans<<endl;
// }

// direct formula -> ans = (ans * 10) * digit
// reverse formula -> ans = (digit * pow(10, i) + ans)

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     n = abs(n);

//     int binary = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         bit = !bit; 
//         cout<<bit<<endl;
//         binary = (bit * pow(10, i) + binary);
//         n = n>>1;
//         i++;
//     }
//     cout<<binary<<endl;  
// }

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans = 0, i = 0;
    while(n!=0){
        int digit = n%10;
        if (digit==1){
            ans = ans + digit * pow(2, i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}