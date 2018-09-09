#include <iostream>
#include <math.h>


using namespace std;

int main() {
  long long beg, end, counter = 0;
  cin >> beg >> end;
  long long max = pow(end, 1/6.);
  float max2 =  pow(end, 1/6.);
  if (0.98 < max2 - max && max2-max < 1){
    max += 1;
  }
  long long min1 = pow(beg, 1/6.);
  float min2 = pow(beg, 1/6.);
  if(min1 < min2 - 0.1){
    min1 += 1;
  }
  long long N = max-min1+1;
  if (beg == end){
        N =1;
  }
  cout << N;
  

}
