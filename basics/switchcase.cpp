#include <iostream>
using namespace std;

int main(){

    // int a, b;
    // cout<<"Enter value of a: ";
    // cin>>a;
    // cout<<"Enter value of b: ";
    // cin>>b;
    // char op;
    // cout<<"Enter operation: ";
    // cin>>op;
    // switch(op){
    //     case '+':
    //         cout<<a+b<<endl;
    //         break;
    //     case '-':
    //         cout<<a-b<<endl;
    //         break;
    //     case '*':
    //         cout<<a*b<<endl;
    //         break;
    //     case '/':
    //         cout<<a/b<<endl;
    //         break;
    //     case '%':
    //         cout<<a%b<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid operation"<<endl;
    // }

    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    int hundred = 0, fifty = 0, twenty = 0, one = 0;
    int x;
    for(int i=0; i<4; i++){
            switch(i){
                case 0:
                    x=amount/100;
                    hundred+=x;
                    amount=amount-x*100;
                    break;
                case 1:
                    x=amount/50;
                    fifty+=x;
                    amount=amount-x*50;
                    break;
                case 2:
                    x=amount/20;
                    twenty+=x;
                    amount=amount-x*20;
                    break;
                case 3:
                    x=amount/1;
                    one+=x;
                    amount=amount-x*1;
                    break;
            }
    }
    cout<<"hundred: "<<hundred<<endl;
    cout<<"fifty: "<<fifty<<endl;
    cout<<"twenty: "<<twenty<<endl;
    cout<<"one: "<<one<<endl;
}