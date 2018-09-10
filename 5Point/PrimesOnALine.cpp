#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, counter = 0, value = 2;
  vector<int> num;
  cin >> N;
  while (counter != N){
    while (true){
      bool isPrime = true;
      for (int z = 2; z < value-1; z++){
        if (value % z == 0){
          isPrime = false;
          break;
        }
      }
      value++;
      if (isPrime){
        //cout << value-1 << endl;
        num.push_back(value-1);
        break;
      }
    }
    counter++;
  }
  
  int j =1;
  for (int i=0; i<num.size(); i++){
    if (j != 10){
      cout << num[i] << " ";
    }
    else {
      cout << num[i] << endl;
      j =0;
    }
    j++;
    
  }
  
  
  
  
  
  
}
