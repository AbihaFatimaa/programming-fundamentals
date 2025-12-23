//Sum of Diagonal Elements in Each Block.
# include <iostream>
# include <string>
# include <cstdlib>
using namespace std;
int main(){
    int arr[2][3][3];
    for(int i=0; i<2; i++){
    	for(int j=0; j<3; j++){
    		for(int k=0; k<3; k++){
    			arr[i][j][k] = rand()%25+1;
			}
		}
	}
	int sum =0;
    for(int i=0; i<2; i++){
    	for(int j=0; j<3; j++){
    		for(int k=0; k<3; k++){
    			if(j == k){
    				sum += arr[i][j][k];
				}
			}
		}
	}
	cout<<"sum of diagonal elements is: "<<sum<<endl;
	return 0;
}