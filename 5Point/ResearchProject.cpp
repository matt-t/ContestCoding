#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int guys, pics, wow;
  vector<int> range;
  cin >> guys;
  for (int j = 0; j<guys; j++){
    cin >> pics;
    for (int i =0; i<pics; i++){
      cin >> wow;
      range.push_back(wow);
    }
    sort(range.begin(), range.end());
    cout << range[0] << "   " << range[range.size()-1] << endl;
    range.clear();
  }
 

  return 0;
}
