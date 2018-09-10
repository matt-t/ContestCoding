#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
  long long house, time, barter, counter = 0;
  vector<long long> remainder;
  cin >> house >> time;
  for (long long i =0; i< house; i++){
    cin >> barter;
    remainder.push_back(barter);
  }
  sort(remainder.begin(), remainder.end());
  
  for (long long i =0; i< house; i++){
    time = time - remainder[i];
    if (time < 0){
      break;
    }
    else{
      counter++;
    }
    time -= 1;
  }
  cout << counter;
  
}
