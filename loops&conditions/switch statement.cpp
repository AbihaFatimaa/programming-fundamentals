// switch statement;
# include<iostream>
# include <string>
using namespace std;
int main(){
	int month;
	cout<<"enter the month number: "<<endl;
	cin>>month;
	string season = "unset";
	switch (month){
        case 12:
        case 1:
        case 2:
        season = "Winter";
        break;
        case 3:
        case 4:
        case 5:
        season="Spring";
        break;
        case 6:
        case 7:
        case 8:
        season = "Summer";
        break;
        case 9:
        case 10:
        case 11:
        season = "Autumn";
        break;
        default:
        season = "Invalid month";
    }
    
    cout<<"season = " << season <<endl;
    return 0;
}
