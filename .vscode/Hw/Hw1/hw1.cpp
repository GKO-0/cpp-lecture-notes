#include <iostream>
using namespace std;

int main(void) {
    int a;
    int b;
    float c;
    cout << "Enter the value for a, b, and c: ";
    cin >> a >> b >> c;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "a*b = " << a*b << endl;
    cout << "a/b = " << (float)a/(float)b << endl;
    cout << "a+b+c = " << a+b+c << endl;
    return 0;
}