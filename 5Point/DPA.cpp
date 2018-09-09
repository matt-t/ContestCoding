#include <iostream>

using namespace std;

int main() {
  int n, num, total = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num;
    for (int j=1; j < num; j++){
      if (num%j == 0){
        total += j;
      }
    }
    if (total == num){
      cout << num << " is a perfect number." << endl; 
    }
    else if (total < num){
      cout << num << " is a deficient number." << endl;
    }
    else{
      cout << num << " is an abundant number." << endl;
    }
    total = 0;
  }
  return 0;
}
