/*Write a C++ program that demonstrates type casting. Perform the following operations:

Declare a double variable named price and initialize it with the value 99.99.
Cast the price variable to an int and store the result in a new variable named intPrice.
Print the values of price and intPrice, to the console.
Type casting is the process of converting a value from one data type to another.
*/

#include <iostream>
using namespace std;
int main() {
    // Declare and initialize variables
    double price = 99.99;
    int intPrice = (int) price;
    
    
    // Output the values
    cout << "Price: " << price << endl;
    cout << "Int Price: " << intPrice << endl;
    
    return 0;
}