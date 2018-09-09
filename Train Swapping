#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
  int cases, trains, nums;
  vector<int> swapping;
  cin >> cases;
  for (int i=0; i< cases; i++){
    int wow = 0;
    cin >> trains;
    for (int j=0; j<trains; j++){
      cin >> nums;
      swapping.push_back(nums);
    }
    for (int m=0; m<swapping.size(); m++){
      for (int j=0; j<swapping.size()-1-m; j++){
        //cout << j << " ";
        //cout << swapping [j] << " " << swapping [j+1] << endl;
        if (swapping[j] > swapping[j+1]){
          swap(swapping[j], swapping[j+1]);
          wow++;
        }
      }
    }

    //for (int k =0; k<swapping.size(); k++){
    //  cout << swapping[k] << endl;
    //}
    cout << "Optimal train swapping takes " << wow << " swap(s)." << endl;
    swapping.clear();
  }
}
