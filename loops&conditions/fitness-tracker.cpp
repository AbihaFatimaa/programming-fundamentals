// Fitness tracker.
# include <iostream>
# include <string>
using namespace std;
int main(){
	cout<<"fitness tracker!"<<endl;
	int steps[7];
	int sum=0;
	int average;
	int max = 0;
	cout<<"enter your steps: "<<endl;
	for(int i=0; i<7; i++){
		cin>>steps[i];
		sum += steps[i];
		if(steps[i]> steps[max]){
			max = i;
		}
	}
	average = sum/7;
	for(int i=0; i<7; i++){
		string activity;
		if(steps[i] < 5000){
			activity = "sedentary";
		}
		else if(steps[i] >= 5000|| steps[i]<7499){
			activity = "lightly-active";
		}
		else if(steps[i] >= 7500|| steps[i]<9999){
			activity = "Moderately-active";
		}
		else if(steps[i] >= 10000){
			activity = "Very-active";
		}
		cout<<"steps on day"<<i+1<<": "<<activity<<endl;
	}
	cout<<"maximum steps were on "<<max+1<<endl;
	cout<<"average steps per day is: "<<average<<endl;
	if(average<7500){
		cout<<"need improvement"<<endl;
	}
	
	return 0;
}
