#include <iostream>
#include <string>

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float avg;
	cout << "enter three values: ";
	cout << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	avg = (a+b+c)/3;
	cout << "their average is ";
	cout << avg;
	cout << endl;

	return 0;
}