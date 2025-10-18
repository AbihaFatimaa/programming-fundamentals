// descion making..
#include <iostream>
using namespace std;

int main() {
    int number;
    cout<< "enter a number: "<<endl;
    cin >> number;
    string result = "";
    
    
 result = (number>0)? "positive" : (number<0)?"negative":"zero";
    
    cout << "The number is " << result <<endl;
    return 0;
}