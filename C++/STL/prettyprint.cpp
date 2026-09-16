#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        
        // hex - tells cout to print in hexadecimal 
        // nouppercase - problem wanted lowercase hex letters only
        // showbase - show `0x` at the beginning
        // setw(0) - removes the space buffer that kept appearing after 0x
        // (long long)A - converts the `double A` to `long long` integer form, truncating it.
        cout << hex << nouppercase << showbase << setw(0) << (long long)A << endl;

        // dec - switches to decimal formatting
        // right - aligns the value to the right
        // setw(15) - sets the min width of this line to 15 characters.
        // setfill('_') - changes padding character on the left side from ' ' to '_'
        // showpos - shows the sign of the numbers
        // fixed - removes trailing zeros
        // setprecision(2) - rounds to 2 decimal places
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;

        // nowshowpos - removes the sign from `showpos` earlier
        // uppercase - lets letters be uppercasse so we can have E for sci. notation
        // scientific - formats output to scientific notation
        // setprecision(9) - sets sig figs to 9 in sci. notation.
        cout << noshowpos << uppercase << scientific << setprecision(9) << C << endl;


	}
	return 0;

}