/*Write a program to compute and print the nth value of the Fibonacci Sequence with a given n
input by console.*/
# include <iostream>
# include <string>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;

    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    cout<<"the nth value of fibonacci seq. is: "<<a<<endl; 

    return 0;
}
