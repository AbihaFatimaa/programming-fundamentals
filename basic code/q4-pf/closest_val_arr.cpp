//Write a function to search for the value closest to a given n input by console.
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
using namespace std;
int find_closest (int n, int arr[]){
	int closest = arr[0];
	for(int i=1; i<10; i++){
		if(abs(arr[i]-n)<abs(closest-n)){
			closest = arr[i];
		}
	}
	return closest;
}
int main(){
	int n;
		int arr[10];
	srand(time(0));
	int min = 100;  int max = 999;
	int range = max-min+1;
	int rv;
	for(int i=0; i<10; i++){
		arr[i] = rand()% range +100;
}	
    for(int j=0; j<10; j++){
		cout<<arr[j]<<" "<<endl;
}
    cout<<"enter the value 'n': ";
    cin>>n;	
    int a = find_closest (n,arr);
    cout<<"the value closest to "<<n<<" is: "<<a<<endl;
    return 0;
}