# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include <fstream>
using namespace std;
int main(){
	const int countries = 12;
	const int products = 5;
	const int transport = 3;
	const int tarrifs= 5;
	const int months = 12;
	srand(time(0));
	
	string country[countries];
	
	ifstream ifile("countries of the world.csv");
	if(!ifile){
		cout<<"error!!";
		return 0;
	}
	string line;
	getline(ifile, line);
	for(int i=0; i<countries && getline(ifile, line); i++){
		country[i] = line.substr(0, line.find(','));
	}
	ifile.close();
	
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
	int count[countries][tarrifs] = {0};
	for(int i=0; i<countries; i++){
		for(int j=0; j<countries; j++){
			for(int k=0; k<products; k++){
				for(int l=0; l<transport; l++){
					for(int m=0; m<tarrifs; m++){
						for(int n=0; n<months; n++){
						int tariffRate = rand() % 101;
                        int slab = tariffRate / 20;
                        if(slab == 5) {
						slab = 4;
  							}
                        count[i][slab]++;
						}
					}
				}
			}
		}
	}
	cout<<"origin country wise trade: "<<endl;
	 for (int o=0; o<countries; o++)
    {
        cout << "Country: " << country[o] << endl;
        cout << "0 - 20%    : " << count[o][0] << endl;
        cout << "21 - 40%   : " << count[o][1] << endl;
        cout << "41 - 60%  : " << count[o][2] << endl;
        cout << "61 - 80% : " << count[o][3] << endl;
        cout << "81 - 100%: " << count[o][4] << endl;
    }
   return 0;
}