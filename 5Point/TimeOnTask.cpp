#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int time, num, task, counter =0;
  vector<int> chores;
  cin >> time >> num;
  for (int i=0; i< num; i++){
    cin >> task;
    chores.push_back(task);
  }
  sort(chores.begin(), chores.end());
  for (int j=0; j<chores.size(); j++){
    if (time - chores[j] >= 0){
      time = time-chores[j];
      counter++;
    }
    else{
      break;
    }
  }
  cout << counter;
}
