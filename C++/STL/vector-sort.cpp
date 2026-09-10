#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;

    int N;
    cin >> N;
    int v_i;

    for (int i = 0; i < N; i++) {
        cin >> v_i;
        v.push_back(v_i);    
    }

    // Debug
    // cout << "V size = " << v.size();

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        cout << v[i];
        if (i != N-1) {
            cout << " ";
        }
    }
    

    return 0;
}
