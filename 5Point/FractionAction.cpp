#include <iostream>

using namespace std;

int main() {
  int num, div, result, fraction;
  cin >> num;
  cin >> div;
  result = num/div;
  fraction = (num%div);
  if (fraction != 0 && result >=1){
    for (int i = 2; i<10000000; i++){
      if (fraction%i == 0 && div%i == 0){
        fraction = fraction/i;
        div = div/i;
      }
    }
    cout << result << " " << fraction << "/" << div;
  }
  
  else if (result == 0){
    for (int i = 2; i<10000000; i++){
      if (fraction%i == 0 && div%i == 0){
        fraction = fraction/i;
        div = div/i;
      }
    }
    cout << fraction << "/" << div;
  }
  
  else{
    cout << result;
  }

  return 0;
}
