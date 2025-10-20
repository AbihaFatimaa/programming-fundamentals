#include <iostream>
#include <string>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        // swap arr[i] with arr[size - i - 1]
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[8];
    cout << "Enter 8 integers: ";
    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    reverseArray(arr, 8);

    cout << "Reversed array: ";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
    cout << endl;
}
