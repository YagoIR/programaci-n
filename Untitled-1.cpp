#include <iostream>
using namespace std; 

int main () {
    int a;
    cin >> a;
    int b == 0;
    while (a>0) {
        b = b+a*a;
        a = a-1;
    }
    cout << b << endl;
}