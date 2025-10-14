/*Q: write a program to write counting using the while loop?
this program inputs a number from the user and prints the counting till there.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    
    int i = 1;
    while(i <= N)
    {
        cout << i << endl;
        i = i + 1;
    }
    
	return 0;
}
