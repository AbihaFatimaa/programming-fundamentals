/*Declare two integers and initialize them.
Write a function swap(int *a, int *b) that swaps their values using pointers.
Print the values before and after swapping.*/
# include <iostream>
# include <string>
using namespace std;
void swap (int *a, int *b){
	int t=*a;
	*a = *b;
	*b = t;
}
int main(){
	int a, b;
	a = 10; b=70;
	cout<<"values before swapping: "<<endl;
	cout<<a<<endl<<b<<endl;
	swap(&a, &b);
	cout<<"Values after swapping: "<<endl;
	cout<<a<<endl<<b<<endl;
	return 0;
}