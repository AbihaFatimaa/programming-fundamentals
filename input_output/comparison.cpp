/*Write a script that initializes 2 variables n1 and n2.
After that initialize another variable n3 that will hold whether n1 is bigger than n2.*/

#include <iostream>
using namespace std;
int main() {
int n1,n2;
cout<<"enter two integers: "<<endl;
cin>> n1 >>n2 ;
bool n3 = n1 > n2;
    
    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 <<endl;
    
    return 0;
}