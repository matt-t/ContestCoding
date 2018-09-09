#include <iostream>

using namespace std;

int main() {
  int num, T;
  cin >> T;
  for (int i =0; i<T; i++){
    cin >> num;
    if (num%6 == 0){
      cout << num << " is nasty" << endl;;
    }
    else{
      cout << num << " is not nasty" << endl;;
    }
  }

}
