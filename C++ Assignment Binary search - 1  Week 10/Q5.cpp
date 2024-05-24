#include <iostream>
using namespace std;
bool checker(int n, int m){
    if(n*n==m){
        return true;
    }else{
        return false;
    }
}
int main() {
    int number=10;
    int lo = 0;
    int hi = number;
    int mid = 0;
    while (lo <= hi) {
        mid = (hi + lo) / 2;
        if (mid * mid == number) {
            cout<<mid;
            break;
        } else if (mid * mid > number) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    if(checker(hi, number)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
