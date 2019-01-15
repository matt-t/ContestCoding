#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int radius, length;
  while(true){
    int total = 1;
    cin >> radius;
    if (radius == 0){
      break;
    }
    else{
      total += radius*4;
      for (int i = 1; i<= radius; i++){
        length = sqrt(pow(radius,2) - pow(i,2));
        //cout << length << "ree" << endl;
        total += length*4;
      }
    }
    cout << total << endl;
    
  }

}
