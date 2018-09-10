#include <iostream>

using namespace std;

int main() {
  int num, group, seconds, extra, add;
  cin >> num >> group;
  if (num%group == 0){
    cout << 0;
  }
  else {
    extra = num % group;
    add = group - extra;
    //cout << add << " " << extra << endl;
    if (add < extra){
      cout << add;
    }
    else if (num - extra == 0){
      cout << add;
    }
    else if (num - extra != 0){
      cout << extra;
    }
  }
}
