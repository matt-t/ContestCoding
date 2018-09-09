#include <iostream>

using namespace std;

int main() {
  int counter =0;
  char c;
  string letter {'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
  string word;
  cin >> word;
  for (int i=0; i<word.size(); i++){
    c = word[i];
    for (int j=0; j<7; j++){
      if (c == letter[j]){
        counter++;
      } 
    }
  }
  if (counter == word.size()){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
}
