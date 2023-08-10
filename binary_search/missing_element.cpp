#include <iostream>
using namespace std;
#include <vector>

int missingElement(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;

    while (s <= e) { 
        int mid = s + (e - s) / 2;
        int deviation = v[mid] - mid;

        if (deviation != v[0]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return v[s] - 1;
}



int main() {
  vector <int> v{1, 2, 3, 4, 6, 7, 8, 9, 10};
  int ans = missingElement(v);
  cout << "answer is " << ans;
  return 0;
}