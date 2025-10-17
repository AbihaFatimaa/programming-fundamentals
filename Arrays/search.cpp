# include <iostream>
# include <string>
# include <array>
using namespace std;
int main(){
	array<int,5>nums;
	int i=0;
	cout<<"enter 5 integers: ";
	while(i<5){
		cin>>nums[i];
		i++;
		
	}
	int search;
	cout<<"enter the number you want to search: ";
	cin>>search;
	bool found = false;
	i=0;
	while(i<5){
		
		if(nums[i]==search){
		found = true;
		break;
		}
		i++;
	}
	  if (found)
        cout << "Yes! " << search << " is in the array." << endl;
    else
        cout << "No! " << search << " is not in the array." << endl;

	return 0;
}