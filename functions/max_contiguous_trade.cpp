# include <iostream>
# include <string>
# include <array>
using namespace std;
int max_contiguous_gain (array<int , 5>daily_change){
	int maxSum = 0;
	int currentSum = 0;
	int temp=0;
	int start = -1;
	int finish = -1;
	for(int i=0; i<5; i++){
		currentSum = currentSum + daily_change[i];
		if(currentSum <0){
			currentSum = 0;
			temp = i+1;
		}
		if(currentSum > maxSum){
			maxSum = currentSum;
			start = temp;
			finish = i;
		}
	}
	cout<<"start index:"<<start<<endl;
	cout<<"end index:"<<finish<<endl;
	return maxSum;
}
int main(){
	array<int , 5>trade = {-1,5,-2,4,-10};
	int gain = max_contiguous_gain (trade);
	cout<<gain;
	return 0;
}