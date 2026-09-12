#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Not necessary. Given vector is already sorted.
    // sort(arr.begin(), arr.end());

    int Q;
    cin >> Q;

    while (Q > 0) {
        int Y;
        cin >> Y;
        
        vector<int>::iterator lb = lower_bound(arr.begin(), arr.end(), Y);

        if (*lb == Y) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }
        
        cout << (lb - arr.begin()) + 1 << endl;

        Q--;
    }
    return 0;
}
