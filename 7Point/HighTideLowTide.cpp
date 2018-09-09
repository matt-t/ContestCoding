#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> high;
  vector<int> low;
  int num, wow;
  cin >> num;
  for (int i=0; i<num; i++){
    cin >> wow;
    high.push_back(wow);
  }

  sort(high.begin(), high.end());

  if (high.size()%2 == 0){
    for (int i = high.size()/2- 1 ; i>= 0 ; i--){
      int index = high[i];
      low.push_back(index);
    }
    high.erase (high.begin(), high.begin()+high.size()/2);  
  }

  else{
    for (int i = high.size()/2; i>= 0 ; i--){
      int index = high[i];
      low.push_back(index);
    }
    high.erase (high.begin(), high.begin()+(high.size()/2+1));  
  }

  int l=0, h=0;
  for(int i=0; i<num; i++){

    if(i == 0 || i%2 == 0){
      cout << low[l] << " ";
      l++;
    }
    else{
      cout << high[h] << " ";
      h++;
    }
  }


}
