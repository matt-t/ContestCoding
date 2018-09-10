#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, num, index, counter =0;
  char letter;
  vector<char> pile1;
  vector<char> pile2;
  
  cin >> N;
  for (int i =0; i<N; i++){
    cin >> num;
    for (int k=0; k<2; k++){
      for (int j=0; j<num; j++){
        cin >> letter;
        if(k == 0){
          pile1.push_back(letter);
        }
        else {
          pile2.push_back(letter);
        }
      }


    for (int n=pile2.size(); n>0; n--){
      cout << pile2[n-1] << pile1[n-1];
    }
      
    pile1.clear();
    pile2.clear();
    cout << endl;
    }
  }
  
 
}
