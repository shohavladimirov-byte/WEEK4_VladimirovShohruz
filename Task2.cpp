#include <iostream>
using namespace std;

int main() {

    int x,y,z;
    cin >> x >> y >> z;
    int res=0;
    if (x>y & x<z || x>z & x<y) {
        res = x;
    }
    else if (y>x & y<z || y>z & y<x) {
        res = y;
    }
    else {
        res = z;
    }
    cout << res << endl;
}