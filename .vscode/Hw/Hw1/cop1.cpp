#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float xl = -10, xu = 10, xg, fg;
    int n, C;

    cout << "Enter the value of C: " ;
    cin >> C;

    float f1;
    float f2;
    
    while ( (xu-xl) > pow(10, -6)) {
    xg = (xl+xu)/2;
    fg = pow(xg,3) + C*xg -10;
    f1 = pow(xl,3) + C*xl -10;
    f2 = pow(xu,3) + C*xu -10;

    if ((fg < 0) == (f1 > 0)) {
        xu = xg;
    } 
    else if ((fg > 0) == (f2 < 0)) {
        xl = xg;
    }
    
    n++;
    }

    cout << "Number of iterations: " << n << endl;
    cout << "Found root x to be between " << fg << " and " << fg;
    return 0;
}