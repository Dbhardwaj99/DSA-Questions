#include <iostream>
#include <vector>
using namespace std;



int main() {
  vector<int> arr{3, 5, 2, 1, 7, 6, 10, 9, 8};
  
  int min;
  int temp;
  for (int i  = 0; i < arr.size()-1; i++){
    min = i;
    for (int j = i+1; j < arr.size(); j++){
      if (arr[j] < arr[min]){
        min = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  for (int i = 0; i < arr.size(); i++){
    cout << arr[i] << ", ";
  }

  return 0;
}