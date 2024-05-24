#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,3,4,4,4,5};
    int target = 4;
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
    if (result != -1) {
        cout<<result;
    } else {
        cout<<result<<endl;
    }
    return 0;
}
