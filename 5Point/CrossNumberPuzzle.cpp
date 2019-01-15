#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int calc(int num)
{
  int s = 0;
  for(int i = 1; i <= sqrt(num); i++) {
    if(num % i == 0) {
      int a = i;
      int b = num / i;
      s += a;
      if(b != a && b < num) {
        s += b;
      }
    }
  }
  return s;
}

int wow(int num)
{
  string s = to_string(num);
  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = s[2] - '0';
  return pow(a, 3) + pow(b, 3) + pow(c, 3);
}
int main() {
  for(int i = 1000; i <= 9999; i++) {
    if(i == calc(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
  for(int i = 100; i <= 999; i++) {
    if(i == wow(i)) {
      cout << i << " ";
    }
  }
  return 0;
}
