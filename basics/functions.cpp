#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int fib=0;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0; i<n-2; i++){
        fib=a+b;
        a=b;
        b=fib;
        cout<<fib<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    fibonacci(n);
}

// int setbitcount(int n){
//     int count=0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }
// int main(){
//     int a, b;
//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     int x = setbitcount(a);
//     int y = setbitcount(b);
//     cout<<x+y<<endl;
// }

// int power(int a, int b){
//     int ans = 1;
//     for(int i=0; i<b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a, b;
//     cout<<"Enter number: ";
//     cin>>a;
//     cout<<"Enter exponent: ";
//     cin>>b;
//     cout<<power(a,b)<<endl;
// }

// int evenodd(int n){
//     if(n&1){
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     if(evenodd(n)){
//         cout<<"Even number";
//     }
//     else{
//         cout<<"Odd number";
//     }
// }

// int factorial(int n){
//     int fact=1;
//     for(int i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int ncr(int n, int r){
//     return (factorial(n)/(factorial(r)*factorial(n-r)));
// }
// int main(){
//     int n, r;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     cout<<"Enter value of r: ";
//     cin>>r;
//     cout<<ncr(n,r);
// }

// void printCounting(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     printCounting(n);    
// }

// int isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"Prime number";
//     }
//     else{
//         cout<<"Not a Prime number";
//     }
// }

// int nterm(int n){
//     return 3*n+7;
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<nterm(n);
// }