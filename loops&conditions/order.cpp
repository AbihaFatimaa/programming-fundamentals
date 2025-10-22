# include <iostream>
# include <string>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three no. : ";
	cin>>a>>b>>c;
	int small,mid,large;
	if(a<=b&&a<=c){
		small = a;
		if(b<=c){
			mid = b;
			large = c;
		}
		else{large =b;
		mid =c;
		}
	}
   else if(b<=c&&b<=a){
		small=b;
		if(a<=c){mid = a;
		large = c;
		}
		else{large = a;
		mid = c;
		}
	}
	else if(c<=a&&c<=b){
		small = c;
		if(a<=b){
		mid=a;large=b;
		}
		else{large = a;
		mid = b;
		}
	}
	cout<<"the numbers in order are: ";
	cout<<small <<mid <<large;	
	return 0;
	}
