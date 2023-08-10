#include <iostream>
#include <vector>
using namespace std;

int search2DMatrix(vector<vector<int>> arr, int target, int row, int column){
  int s = 0;
  int e = row*column;
  int mid = s + (e-s)/2;

  while (s <= e){
    int rowIndex = mid/column;
    int colIndex = mid%column;

    if (arr[rowIndex][colIndex] == target){
      return 1;
    }
    else if (arr[rowIndex][colIndex] < target){
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }

  return 0;
}

int main() {
  vector<vector<int>>arr{{1, 3, 4, 5}, {6, 7, 8, 10}, {13, 16, 18, 21}};
  int rows = arr.size();
  int columns = arr[0].size();

  for (int i= 0; i < arr.size(); i++){
    for (int j = 0; j < arr[i].size(); j++){
      cout << arr[i][j] << ", ";
    }
    cout << "\n";
  }

  cout << search2DMatrix(arr, 18, rows, columns);
  return 0;
}