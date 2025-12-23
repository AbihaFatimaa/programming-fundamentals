//taking transpose of a matrix.
# include <iostream>
# include <string>
using namespace std;
int main(){
	int matrix[3][4], trans[4][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin>>matrix[i][j];
		}
	}
		for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			trans[j][i] = matrix[i][j];
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout<<trans[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}