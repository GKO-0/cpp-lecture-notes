#include <iostream>
using namespace std;

int main() {
    int x1 = -10, x2 = 10, C, n, xg, fg;

    cout << "Enter the value of C: " ;
    cin >> C;
    cout << "Number of iterations: ";
    cin >> n;
    int f1 = x1^3 + C*x1 -10;
    int f2 = x2^3 + C*x2 -10;
    
    while ( (x2-x1) > 10^-6) {

    xg = (x1/x2)/2;
    fg = xg^3 + C*xg -10;
    if (fg < 0) {
        x1 = xg;
    } else if (fg > 0) {
        x2 = xg;
    }
    }

    cout << "Found root x to be between " << fg << "and " << fg;
    return 0;
}