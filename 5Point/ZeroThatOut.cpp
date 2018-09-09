#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, num, total = 0;
  vector<int> numbers;
  cin >> N;
  for (int i =0; i<N; i++){
    cin >> num;
    if (num == 0){
      numbers.pop_back();
    }
    else{
      numbers.push_back(num);
    }
  }
  for (int j=0; j<numbers.size(); j++){
    total += numbers[j];
  }
  cout << total;
}
