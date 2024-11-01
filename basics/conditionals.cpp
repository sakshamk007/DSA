#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter character: ";
    cin >> c;
    if (c>='a' && c<='z'){
        cout << "lowercase" << endl;
    }
    else if (c>='A' && c<='Z'){
        cout << "uppercase" << endl;
    }
    else if (c>='1' && c<='9'){
        cout << "numeral" <<endl;
    }
}