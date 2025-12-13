/*A robot moves in a plane starting from the original point (0,0). The robot can move toward UP,
DOWN, LEFT and RIGHT with a given steps. So, you can provide instructions, as example, to
robot as follows: U 2 L 3 U 2 R 2 U 6 D 10 L 3 to move 2 steps up, then 3 steps left, then 2 steps
up, then 2 steps right, then 6 steps up, then 10 steps down, then lastly 3 steps left. These steps
may be input in several line as per programmers convince.*/
# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int main(){
	int x=0, y=0;
	string direct;
	int steps;
	cout<<"enter the direction (end to quit): ";
	while (true){
		cin>>direct;
		if(direct == "end"){
			break;
		}
		cout<<"enter the no. of steps: ";
		cin>>steps;
		if(direct == "u"){
			y += steps;
		}
		else if(direct == "d"){
			y -= steps;
		}
		else if(direct == "r"){
			x += steps;
		}
		else if(direct == "l"){
		x -= steps;
		}
		else{
			cout<<"enter correct directions(u,d,r,l,end)";
		}
		
	}
	double distance = sqrt(x*x + y*y);
		cout<<"the current position ("<<x<<" , "<<y<<")"<<endl;
		cout<<"the distance from origin: "<<distance<<endl;
	}