#include <iostream>
#include <vector>
using namespace std;

int seachNearlySorted(vector<int> arr, int target){
  int s = 0;
  int e = arr.size()-1;
  int mid;

  while(s <= e){
    mid = s + (e-s)/2;

    if (arr[mid] == target){
      return mid;
    }
    else if(mid-1 >= s && arr[mid-1] == target){
      return mid-1;
    }
    else if(mid+1 <= e && arr[mid+1] == target){
      return mid + 1;
    }
    else if(arr[mid] > target){
      e = mid-2;
    }
    else{
      s = mid+2;
    }
  }

  return -1;
}

int main() {
  vector <int> arr{10, 3, 40, 20, 50, 80, 70};
  int answer = seachNearlySorted(arr, 40);

  cout << "answer is : " << answer;

  return 0;
}