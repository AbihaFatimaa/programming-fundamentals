# include <iostream>
# include <string>
using namespace std;
int nlstr_length(char str[]){
	int i=0;
	int count=0;
	while(str[i] != '\0' && str[i] != '\n'){
		count++;
		i++;
	}
	return count;
} 
void nlstr_makeempty (char str[]){
	int i=0; 
	str[i] = '\0';
	return;
}
void nlstr_assign (char target[], char source[]){
	int i=0;
	while(source[i] != '\0' && source[i] != '\n'){
	   target[i] = source [i];
	   i++;
	}
	target [i] = '\0';
}
void nlstr_append (char target[], char str[]){
	int i=0; 
	while(target[i] != '\0' && target[i] != '\n'){
		i++;
	}
	int j=0; 
	while(str[j] != '\0' && str[j] != '\n'){
		target[i] = str[j];
		i++;
		j++;
	}
	target [i] = '\0';
}
int main(){
	char a[50] = "programming";
	char b[] = " is fun.";
	char d[] = "aaa";
	char c[] = " ";
	int len = nlstr_length (a);
	cout<<"length is: "<<len<<endl;	
	nlstr_assign (c, d);
	cout<<"after assigning d to c:"<<endl;
	cout<<c<<endl;
	cout<<"after appending a to b: "<<endl;
	nlstr_append(a, b);
	cout<<a<<endl;
	nlstr_makeempty(d);
	cout<<"char after make empty function is "<<d;
	return 0;
}