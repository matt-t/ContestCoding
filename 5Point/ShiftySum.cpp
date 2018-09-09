#include <iostream>

using namespace std;

int main() {
  int num, shift, total;
  cin >> num >> shift;
  total = num;
  for (int i=0; i <shift;i++){
    num = num*10;
    total += num;
  }
  cout << total;
  
  return 0;
}
