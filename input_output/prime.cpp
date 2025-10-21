# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int main(){

int n,c,l,f,r;
cout<<"enter the number: ";
cin>>n;
c=2;
f=0;
r=-1;
l=sqrt(n);
while(c<=l){
	r=n%c;
	if(r==0){
	f=1;
	}
	c=c+1;
}
if(f==1){cout<<"not prime"<<endl;
}
else{cout<<"is prime";
}
return 0;
}