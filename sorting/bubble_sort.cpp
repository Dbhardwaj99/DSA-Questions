#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{3, 4, 2, 1, 13, 6, 10, 7, 8};
  int temp;
  for(int i = 1; i < arr.size()-1; i++){
    bool swapped = false;
    for(int j = 0; j < arr.size()-i; j++){
      if (arr[j] > arr[j+1]){
        swapped = true;
        temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
    for (int i = 0; i < arr.size(); i++){
      cout << arr[i] << ", ";
    }
    cout << "\n";
    if (swapped){
      continue;
    }
    else{
      break;
    }
    
  }

  for (int i = 0; i < arr.size(); i++){
    cout << arr[i] << ", ";
  }

  return 0;
}