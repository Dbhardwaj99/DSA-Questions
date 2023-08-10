#include <iostream>
#include <vector>
using namespace std;

void printWaveMatrix(vector<vector<int>> arr){
  for (int i = 0; i < arr[0].size(); i++){
    if(i%2 == 0){
      for (int j = 0; j < arr.size(); j++){
        cout<< arr[j][i] << ", ";
      }
    }else{
      for (int j = arr.size()-1; j >= 0; j--){
        cout<< arr[j][i] << ", ";
      }
    }
  }
}

int main() {
  vector<vector<int>> v
  {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20}
  };

  printWaveMatrix(v);
  return 0;
}