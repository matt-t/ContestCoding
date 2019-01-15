#include <iostream>

using namespace std;
void patterns (int n, int o, int length, int counter, string loli){
  if (length == n){
    cout << loli << endl;
  }
  else{
    if (counter == n-length){
      string loli1 = loli;
      loli1 += '1';
      patterns(n,o, length+1, counter-1, loli1);
    }
    else if (counter != 0){
      string loli1 = loli;
      loli1.push_back('1');
      patterns(n,o, length+1, counter-1, loli1);
      string loli0 = loli;
      loli0.push_back('0');
      patterns(n,o, length+1, counter, loli0);
    }
    else {
      string loli0 = loli;
      loli0.push_back('0');
      patterns(n,o, length+1, counter, loli0);
    }
  }
}

int main() {
  int a ,num, one, length = 0;
  string loli = "";
  cin >> a;
  for (int i=0; i<a;i++){
    cin >> num >> one;
    int counter = one;
    cout << "The bit patterns are" << endl;
    patterns(num,one, length, counter, loli);
    cout << endl;
  }
}
