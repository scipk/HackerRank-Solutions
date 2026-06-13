#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    scanf("%d %d", &n, &q);
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++)
    {
      int k; cin >> k;
      for (int j = 0; j < k; j++) {
        int value;
        scanf("%d", &value);
        a[i].push_back(value);
      }
    }

    for (int i = 0; i < q; i++) {
      int x, y;
      scanf("%d %d", &x, &y);
      printf("%d\n", a[x][y]);
    }
    

    return 0;
}