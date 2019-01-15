#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num, counter = 0;
  char guess;
  cin >> num;
  vector<char> answer;
  vector<char> key;

  for(int i=0; i<num; i++){
    cin >> guess;
    answer.push_back(guess);
  }

  for(int i=0; i<num; i++){
    cin >> guess;
    key.push_back(guess);
  }

  for(int i=0; i<num; i++){
    if (answer[i] == key[i]){
      counter++;
    }
  }
  

  cout << counter;

  return 0;
}
