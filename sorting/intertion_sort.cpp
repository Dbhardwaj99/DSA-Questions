#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{3, 4, 2, 1, 13, 6, 10, 7, 8};

  for(int i = 1; i < arr.size(); i++){
    int temp = arr[i];
    int j = i - 1;

    while(j >= 0 && arr[j] > temp){
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = temp;
  }

  for (int i = 0; i < arr.size(); i++){
    cout << arr[i] << ", ";
  }
  return 0;
}