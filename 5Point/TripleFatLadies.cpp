#include <iostream>

using namespace std;

int main()
{
  long long t,k;
  cin >> t;
  for (int i = 0; i<t; i++){
    cin >> k;
    while (k*k*k%1000 != 888){
      k++;
    }
    cout << k << endl;
  }
  return 0;
}
