#include <iostream>

using namespace std;

int main() {
  int num, x, y;
  cin >> num;
  for (int i = 0; i < num; i++){
    cin >> x >> y;
    int total = (x*y)-1;
    cout << total << endl;
  }
  
}
