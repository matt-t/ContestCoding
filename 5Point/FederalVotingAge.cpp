#include <iostream>

using namespace std;

int main() {
  int n, year, month, day;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> year >> month >>day;
    if (year <= 1988){
      cout << "Yes" << endl;
    }
    else{
      if (year == 1989 && month == 2 && day > 27){
        cout << "No" << endl;
      }
      else if (year == 1989 && month>2){
        cout << "No" << endl;
      }
      else if (year >1989){
        cout << "No" << endl;
      }
      else {
        cout << "Yes" << endl;
      }
      
      
    }
    
    
  }
  
  
  
  return 0;
}
