#include <iostream>
#include <vector>
using namespace std;

int peak(vector <int> v){
  int s = 0;
  int e = v.size() - 1;
  int mid;

  while (s < e){
    mid = s + (e-s)/2;
    if (v[mid] < v[mid+1]){

      s = mid + 1 ;
    }else if(v[mid]> v[mid+1]) {
      e = mid;
    }
  }
  return v[s];
}


int main() {
  vector <int> v{0, 4, 6, 3, 2, 1};
  int answer = peak(v);
  cout << "answer is " << answer;
  return 0;
}