//ЛР1
#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int a, b, r,x, y, d = 0, f = 0, e = 0, g, h, k;
    cout << "a, b?";
    cin >> a >> b;
    cout << "r?";
    cin >> r;
    cout << "x, y?";
    cin >> x >> y;
    d = (-1) * a;
    f = (-1) * b / 2;
    e = b / 2;
    g = pow(x - r, 2);
    h = pow(y, 2);
    k = pow(r, 2);
    g = g + h;
    if ((x <= 0 ) && (x >= d) && (y >= f) && (y <= e))
        cout << "yes";
    else
        if ( g <= k )
            cout << "yes";
        else cout << "no";

    return 0;
}