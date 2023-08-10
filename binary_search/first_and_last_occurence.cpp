#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector <int> v, int target){
  int s = 0;
  int e = v.size()-1;
  int mid = s + (e-s)/2;
  int answer = -1;

  while (s <= e){
    if (v[mid] == target){
      answer = mid;
      e = mid - 1;
    }
    else if (v[mid]> target){
      e = mid -1;
    }
    else{
      s = mid +1;
    }
    mid = s + (e-s)/2;
  }

  return answer;
}


int lastOcc(vector <int> v, int target){
  int s = 0;
  int e = v.size()-1;
  int mid = s + (e-s)/2;
  int answer = -1;

  while (s <= e){
    if (v[mid] == target){
      answer = mid;
      s = mid + 1;
    }
    else if (v[mid]> target){
      e = mid -1;
    }
    else{
      s = mid +1;
    }
    mid = s + (e-s)/2;
  }

  return answer;
}

int main() {
  vector <int> v{1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 6 ,7};
  int target = 3;

  int ans1 = firstOcc(v, target);
  int ans2 = lastOcc(v, target);

  int count = ans2 - ans1 + 1;

  cout << "The first occurence answer is " << ans1 << endl;
  cout << "The last occurence answer is " << ans2 << endl;
  cout << "The count is " << count;
  return 0;
}