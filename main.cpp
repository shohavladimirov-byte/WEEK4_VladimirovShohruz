#include <iostream>
using namespace std;

int main() {

    int n;
    int q=0;
    cout << "Enter a number: ";
    cin >> n;
    int x=0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 1) {
            q++;
            x=n;
        }
       if (x % i == 1) {

           q++;
       }

    }
    
    cout << q << endl;
}