//Store 5 marks of students in an array and display their total.
# include <iostream>
# include <string>
# include <array>
using namespace std;
int main (){
	array<float,5>marks={75,55,87,98,89};
	int i = 0;
	int sum=0;
	while (i<=5){
	sum = sum + marks[i];
	i++;
}
cout<<"their total is: "<<sum<<endl;
return 0;
}