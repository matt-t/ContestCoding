#include <iostream>

using namespace std;

int main() {
  int square = 1, dice;
  do{
    cin >> dice;
    if (dice == 0){
      cout << "You Quit!";
      break;
    }
    else if((square + dice) > 100){
      cout << "You are now on square " << square << endl;
    }
    else {
      square += dice;
      if (square == 54){
        square = 19;
        cout << "You are now on square " << square << endl;
      }
      else if (square == 90){
        square = 48;
        cout << "You are now on square " << square << endl;
      }
      else if(square == 99){
        square = 77;
        cout << "You are now on square " << square << endl;
      }
      else if(square == 9){
        square = 34;
        cout << "You are now on square " << square << endl;
      }
      else if(square == 40){
        square = 64;
        cout << "You are now on square " << square << endl;
      }
      else if(square == 67){
        square = 86;
        cout << "You are now on square " << square << endl;
      }
      else{
        cout << "You are now on square " << square << endl;
      }
    }
  }while (square != 100);
    
  if (square == 100){
    cout << "You Win!";
  }



  return 0;
}
