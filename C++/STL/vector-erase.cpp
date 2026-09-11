#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check_range(int N, int x, int a, int b) {
    if ((x > N) || (x <= 0)) {
        return false;
    }
    if ((a > N) || (a <= 0)) {
        return false;
    }
    if ((b > N) || (b <= 0)) {
        return false;
    }

    return true;    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    
    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    
    int a,b;
    cin >> a >> b;
    if (!check_range(N, x, a, b)) {
        cout << "x, a, and b must all be in range of 1 to " << N;
        return 0;
    }

    arr.erase(arr.begin()+x-1);
    arr.erase(arr.begin()+a-1, arr.begin()+b-1);

    int new_arr_size = arr.size();
    cout << new_arr_size << endl;
    for (int i = 0; i < new_arr_size-1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[new_arr_size-1];
    
    return 0;
}
