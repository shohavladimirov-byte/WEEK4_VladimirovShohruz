#include <iostream>
#include <string>
using namespace std;

int main() {

  string h;
  cin >> h;
  int res=0;
  if (h[0]=='?' & h[1]!='?') {
    res+=2;
  }
  else if (h[3]=='?' & h[4]!='?') {
    res+=6;
  }
  else if (h[0]=='?' & h[1]=='?') {
    res+=48;
  }
  else if (h[3]=='?' & h[4]=='?') {
    res+=60;
  }

}
