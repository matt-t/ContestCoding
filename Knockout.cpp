#include <iostream>

using namespace std;

void output(int a,int b, int c, int d){
  cout << "Round " << a << ": " << b << " undefeated, " << c << " one-loss, " << d << " eliminated";
}



int main() {
  int cases, teams;
  cin >> cases;
  for (int i = 0; i < cases; i++){
    int Round =0, loss=0, elimination =0, undefeated =0, games1, games2;
    cin >> teams;
    undefeated = teams;
    output(Round, undefeated, loss, elimination);
    cout << endl;
    while (elimination != teams-1){
      Round++;
      if (undefeated == 1 && loss == 1){
        undefeated = 0;
        loss = 2;
      }
      else {
        games1 = undefeated/2;
        games2 = loss/2;
        undefeated = undefeated - games1;
        loss = loss + games1 - games2;
        elimination = elimination + games2;
      }
     
      output(Round, undefeated, loss, elimination);
      cout << endl;
      
      
    }

    cout << "There are " << Round << " rounds." << endl;
  }
  
  
  
  return 0;
}
