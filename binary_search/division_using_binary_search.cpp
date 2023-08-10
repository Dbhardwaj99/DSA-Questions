#include <iostream>
#include <climits>
using namespace std;

int divideUsingBinarySearch(int dividend, int divisor){
  cout << dividend;
  if (dividend == INT_MIN && divisor == -1) {
    return INT_MAX;
  }
  else if(dividend == INT_MAX && divisor == -1){
    return INT_MIN;
  }
  else if(dividend == INT_MIN && divisor == 1){
    return INT_MIN;
  }
  else if(dividend == INT_MAX && divisor == 1){
    return INT_MAX;
  }
  int s = 0;
  int e = abs(dividend);
  int ans = 1;
  int mid;
  while(s <= e){
    mid = s +(e-s)/2;
    if(abs(mid*divisor) == abs(dividend)){
      ans = mid;
      break;
    }
    else if(abs(mid*divisor) > abs(dividend)){
      e = mid-1;
    }
    else{
      ans = mid;
      s = mid+1;
    }
  }

  if(dividend < 0 && divisor < 0 || dividend > 0 && divisor > 0){
    return ans;
  }
  else{
    return -ans;
  }
}

int main() {
  int dividend = 2147483648;
  int divisor = 1;
  int quotient = divideUsingBinarySearch(dividend, divisor);
  cout << "The quotient is : " << quotient;
  return 0;
}