/*Write a C++ program that determines the type of a triangle based on the lengths of its three sides.
The program should prompt the user to enter three integer values representing the side lengths.
Based on these inputs, it should classify and output the type of triangle as one of the following:
• Equilateral Triangle: All three sides are equal.
• Isosceles Triangle: Exactly two sides are equal.
• Scalene Triangle: All three sides are different.
• Invalid Triangle: The sum of the lengths of any two sides must be greater than the length of
the third side. If this condition is not met, the input does not form a valid triangle.
Additionally, determine if possible, whether the triangle is right triangle using Pythagoras theorem.*/

# include <iostream>
# include <string>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three sides: ";
	cin>>a>>b>>c;
if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid triangle" << endl;
        return 0;}
	
	if(a==b&&b==c){cout<<"Equilateral triangle"<<endl;
	}
	else if(a==b || b==c || a==c){cout<<"Isosceles triangle"<<endl;
	}
	else if (a!=b &&b!=c && a!=c){cout<<"Scalene triangle"<<endl;
	}
	if ((a * a + b * b == c * c) ||
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a)) {
        cout << "It is also a right triangle." << endl;
    }
	return 0;
	
}