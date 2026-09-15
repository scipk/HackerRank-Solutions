#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q, type, Y;
    string X;
    cin >> Q;

    map<string,int> m;

    for (int i = 0; i < Q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> X >> Y;
            map<string,int>::iterator itr=m.find(X);
            if (itr != m.end()) {
                m[X] = itr->second + Y;
            } else {
                m.insert(make_pair(X, Y));
            }
        } else if (type == 2) {
            cin >> X;
            m.erase(X);
        } else if (type == 3) {
            cin >> X;
            cout << m[X] << endl;
        } else {
            cout << "Type must be either 1, 2, or 3.";
        }
    }
    return 0;
}



