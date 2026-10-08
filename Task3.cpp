#include <iostream>
#include "string"
using namespace std;

int main() {

    int x;
    cin >> x;
    string res = "";
    if (x==6 || x==28 || x==496 || x==8128 || x==33550336) {
        res ="true";
    }
    else {
        res = "false";
    }
    cout << res << endl;
}
