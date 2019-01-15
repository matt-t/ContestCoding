#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> dp(5282, -1);

int function(vector<int>& ree, int distance){
  if(dp[distance] != -1) {
    return dp[distance];
  }
  if (distance == 0){
    return 0;
  }
  else {
    int min = 1e9;
    for (int i = 0; i < ree.size(); i++){
      int newDistance = distance - ree[i];
      //cout << newDistance << endl;
      if (newDistance < 0){
        continue;
      }
      int value = function(ree, newDistance);
      //cout << value << endl;
      if(value < min){
        min = value + 1;
      }
    }
    dp[distance] = min;
    return min;
  }
}

int main() {
  int distance, clubs, length;
  cin >> distance;
  cin >> clubs;
  vector<int> ree (clubs);
  for(int i=0; i<clubs; i++){
    cin >> length;
    ree[i] = length;
  }
  sort(ree.begin(), ree.end());
  int strokes = function (ree, distance);
  if (strokes == 1e9){
    cout << "Roberta acknowledges defeat.";
  }
  else {
    cout << "Roberta wins in " << strokes << " strokes.";
  }
  
}
