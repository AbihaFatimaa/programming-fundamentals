/*Write a code that initializes three variables, a (int), b (double) and c (int) with the values 9, 2.6, and 11 (respectively).

After that, initialize the following variables:

d (int) that will hold the result of a modulo 2 
e (int) that will hold the result of a modulo 3
f (double) that will hold the result of b modulo 1.5
g (double) that will hold the result of b modulo 3.9
h (int) that will hold the result of c modulo 10*/

#include <iostream>
#include <cmath>
# include <string>
using namespace std;
int main() {
    int a = 9;
    double b = 2.6;
    int c = 11;
    int d = a%2;
    int e = a%3;
    double f = fmod(b, 1.5);  
    double g = fmod(b, 3.9); 
    int h = c%10;

    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;
    cout << "d = " << d <<endl;
    cout << "e = " << e <<endl;
    cout << "f = " << f <<endl;
    cout << "g = " << g <<endl;
    cout << "h = " << h <<endl;
    return 0;
}