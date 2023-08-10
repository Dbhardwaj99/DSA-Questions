#include <iostream>
#include <math.h>
using namespace std;

double findPrecision(int answer, int precision, int target){
  double step = 0.1;
  double finalAnswer = answer;

  for(int i = 0; i < precision; i++){
    for(double j = finalAnswer; j*j <= target; j = j + step){
      finalAnswer = j;
    }
    step = step/10;
  }

  return finalAnswer;
}

double findSqrrt(double target, int precision){
  int s = 0;
  int e = target;
  int mid;

  while (s <= e){
    mid = s + (e-s)/2;
    if (mid == target/mid){
      return mid;
    }else if(mid > target/mid) {
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return findPrecision(s-1, precision, target);
}


int main() {
  int target;
  int precision;

  cin >> target;
  cin >> precision;

  double answer = findSqrrt(target, precision);
  cout << "answer is " << answer;
  return 0;
}