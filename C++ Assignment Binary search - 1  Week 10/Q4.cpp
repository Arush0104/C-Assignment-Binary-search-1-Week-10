#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,2,3,4,5,6};
    int lo = 0;
    int hi = arr.size();
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==mid+1){
            lo = mid+1;
        }
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }else hi = mid-1;
        }
    }
    return 0;
}
