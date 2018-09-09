#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> hotels = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000}; 

int paths(int mi, int ma, int lo, int ex){
  if (lo == hotels.size()-1){
    return 1;
  }
  else{
    int counter = 0;
    for (int i = 1; i <= 14+ex; i++){
      if(mi<=hotels[lo+i]-hotels[lo] && hotels[lo+i]-hotels[lo]<=ma){
        counter += paths(mi, ma, lo+i, ex);
      }
    }
    return counter;
  }
  //cout << counter;
}

int main() {
  int location = 0;
  int counter = 0;
  int min, max, extra, num;
  cin >> min >> max >> extra;
  if (extra != 0){
    for (int j = 0; j < extra; j++){
    cin >> num;
    hotels.push_back(num);
    }
  }
  sort(hotels.begin(), hotels.end());

  cout << paths(min, max, location, extra);


  return 0;
}
