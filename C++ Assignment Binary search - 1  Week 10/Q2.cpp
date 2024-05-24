#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0,0,0,0,1,1,1,1,1,1,1,1};
    int target = 1;
    int n = arr.size();
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
   cout<<n-result;
    return 0;
}
