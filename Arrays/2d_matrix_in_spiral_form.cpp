#include <iostream>
#include <vector>
using namespace std;

vector<int> printSpiralMatrix(vector<vector<int>>& matrix) {
  vector<int> ans;
  int m = matrix.size();
  int n = matrix[0].size();
  int totalElements = m*n;
  int startingRow = 0;
  int endingRow = m-1;
  int endingColumn = n-1;
  int staringColumn = 0;
  int count = 0;

  
  while (count < totalElements){
    // first row
    for(int i = staringColumn; i <= endingColumn && count < totalElements; i++){
      ans.push_back(matrix[startingRow][i]);
      count++;
    }
    startingRow++;
    // last column
    for(int i = startingRow; i<= endingRow && count < totalElements; i++){
      ans.push_back(matrix[i][endingColumn]);
      count++;
    }
    endingColumn--;

    // last row
    for(int i = endingColumn; i >= staringColumn && count < totalElements; i--){
      ans.push_back(matrix[endingRow][i]);
      count++;
    }
    endingRow--;

    // first column
    for(int i = endingRow; i >= startingRow && count < totalElements; i--){
        ans.push_back(matrix[i][staringColumn]);
        count++;
    }
      staringColumn++;
  }
  return ans;      
        
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

  vector<int> ans;
  ans = printSpiralMatrix(v);

  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << ", ";
  }
  return 0;
}