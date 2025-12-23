/*If there are 35 heads and 94 legs among the chickens and rabbits on a farm. How many rabbits
and how many chickens do we have? Hint: A loop may be used to iterate all possible solutions.*/
# include <iostream>
# include <string>
using namespace std;
int main(){
	int heads = 35;
	int rabbit = 94; 
	for(int c=1; c<=35; c++){
		for(int r=1; r<=35; r++){
			if(c+r == 35 && 2*c+4*r == 94){
				cout<<"chickens are: "<<c<<" rabbits are: "<<r<<endl;
			}
		}
	}
}