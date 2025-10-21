#include <iostream>
#include <array>   
using namespace std;

array<double, 11> inputArray() {
    array<double, 11> arr;
    cout << "Enter 11 double values: ";
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    return arr; 
}


void outputArray(const array<double, 11>& arr) {
    cout << "Array contents: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to shift down the values in the array
void shiftDown(array<double, 11>& arr) {
    for (int i = arr.size() - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // The first value remains unchanged as per task instructions of the instructor.
}

int main() {
    array<double, 11> nums = inputArray();

    cout << "Before shifting: ";
    outputArray(nums);

    shiftDown(nums);

    cout << "After shifting down: ";
    outputArray(nums);

    return 0;
}
