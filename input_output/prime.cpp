#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, c, l, r, f;
// Ask the user for a number.
    cout << "Enter the number: ";
    cin >> n;

    c = 2;        
    f = 0;         
    r = -1;       
    l = sqrt(n);
	 
    while ( c <= l ) {
        r = n % c;
        if ( r == 0 ) {
            f = 1;
        }
        c++;    // increment opperator.
    }

    if ( f == 1 ) {
        cout << "Not Prime" << endl;
    } else {
        cout << "Yes Prime" << endl;
    }

    return 0;
}





