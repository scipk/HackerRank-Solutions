#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;

    int a_len = a.size();
    int b_len = b.size();

    cout << a_len << " " << b_len << "\n";

    cout << a + b << "\n";

    char a_swap_to_b = a[0];
    a[0] = b[0];
    b[0] = a_swap_to_b;

    cout << a << " " << b;

    return 0;
}