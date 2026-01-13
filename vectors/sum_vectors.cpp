#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the number of integers
    int n;
    cin >> n;
    
    // Read the n integers
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
        //  Add num to the vector using push_back()
    }
    
    // Read the additional integer
    int additional;
    cin >> additional;
    numbers.push_back(additional);
    // Add the additional integer to the vector
    
    //  Calculate sum using range-based for loop
    int sum = 0;
    // range-based for loop 
    for (int num : numbers) {
        sum +=num;
    }   // Output the result
    cout << "Sum: " << sum << endl;
    
    return 0;
}