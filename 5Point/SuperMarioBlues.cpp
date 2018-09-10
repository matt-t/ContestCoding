#include <iostream>

using namespace std;

int main() {
  int num, world, level, counter =0;
  char dash;
  cin >> num;
  for (int n =0; n<num; n++){
    cin >> world >> dash >> level;
    int asdf = world;
    while(asdf == world){
      for (int j= level; j<= 4; j++){
        counter++;
        if (asdf == 1 && j == 2){
          asdf = 4;
          j = 1;
          counter++;
        }
        else if (asdf == 4 && j == 2){
          asdf = 8;
          j = 1;
          counter++;
        }
        else if (j == 4){
          asdf++;
        }
      }
    }
    
    
    for (int i = asdf; i<= 8; i++){
      for (int j= 1; j<= 4; j++){
        counter++;
        //cout << i << "-" << j <<" " << counter << endl;
        if (i == 1 && j == 2){
          i = 4;
          j = 1;
          counter++;
        }
        else if (i == 4 && j == 2){
          i = 8;
          j = 1;
          counter++;
        }
      }
    }
    cout << counter << endl;
    counter = 0;
  }
  
}
