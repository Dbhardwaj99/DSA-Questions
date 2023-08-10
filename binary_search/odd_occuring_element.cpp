#include <iostream>
#include <vector>
using namespace std;

int findRepeatingElement(vector<int> arr){
  int s = 0;
  int e = arr.size()-1;
  int mid;

  while(s <= e){
    mid = s + e-s/2;

    if (mid % 2 == 0){
      if(arr[mid] == arr[mid-1]){
        e = mid - 2;
      }
      else{
        s = mid + 1;
      }
    }else{
      if(arr[mid] == arr[mid+1]){
        e = mid-1;
      }
      else{
        s = mid + 1;
      }
    }
  }
  return arr[s-1];

}

int main() {
  vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 60, 60, 4, 80, 80};
  int answer = findRepeatingElement(arr);
  cout << "Answer is : " << answer << endl;
  return 0;
}