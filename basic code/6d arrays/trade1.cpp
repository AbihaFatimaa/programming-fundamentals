# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
using namespace std;
int main(){
	const int countries = 12;
	const int products = 5;
	const int transport = 3;
	const int tarrifs= 5;
	const int months = 12;
	srand(time(0));
	
	int trades[countries][countries][products][transport][tarrifs][months];
	for(int i=0; i<countries; i++){
		for(int j=0; j<countries; j++){
			for(int k=0; k<products; k++){
				for(int l=0; l<transport; l++){
					for(int m=0; m<tarrifs; m++){
						for(int n=0; n<months; n++){
							trades[i][j][k][l][m][n] =  rand() % (120001 - 30000)+30000;
						}
					}
				}
			}
		}
	}
	int totalTrades[countries][countries] = {0};
	for(int i=0; i<countries; i++){
		for(int j=0; j<countries; j++){
			long sum = 0;
			if(i == j){
				continue;
			}
			for(int k=0; k<products; k++){
				for(int l=0; l<transport; l++){
					for(int m=0; m<tarrifs; m++){
						for(int n=0; n<months; n++){
							sum += trades[i][j][k][l][m][n];
						}
					}
				}
			}
			totalTrades[i][j] = sum;
		}
	}
	cout<<"in matrix format of 12 x 12: "<<endl;
	for(int i=0; i<countries; i++){
		for(int j=0; j<countries; j++){
			if(i == j){
				cout<<"----"<<"\t";
			}
			else{
				cout<<totalTrades[i][j]<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
}