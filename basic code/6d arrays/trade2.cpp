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
	for(int n=0; n<months; n++){
		long sum = 0;
		int count = 0;
		for(int i=0; i<countries; i++){
		for(int j=0; j<countries; j++){
			for(int k=0; k<products; k++){
				for(int l=0; l<transport; l++){
					for(int m=0; m<tarrifs; m++){
						sum += trades[i][j][k][l][m][n];
						count++;
						}
					}
				}
			}
		}
		double avg = (double)sum/count;
		cout<<"average in month "<<n+1<<" is:   "<<avg<<endl;
	}
	
	return 0;
}