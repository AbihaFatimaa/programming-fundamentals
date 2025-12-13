# include <iostream>
# include <exception>
# include <string>
using namespace std;
int find_first_dna_match (string dna_sequence, string pattern){
	int len1 = 0;
	int len2 = 0;
	int i=0;
	while (dna_sequence[i] != '\0'){
		len1++;
		i++;
	}
	int j=0;
	while(pattern[j] != '\0'){
		len2++;
		j++;
	}
	if(len2 == 0){
		runtime_error ex {"Error: pattern is empty!"};
		cout<<ex.what();
	}
	if(len1<len2){
		runtime_error ex{"Error: pattern longer than the dna_sequence!"};
		cout<<ex.what();
	}
	for(int k=0; k<=len1-len2; k++){
			bool found = true;
		for(int j=0; j<len2; j++){
		if(dna_sequence[k+j] != pattern[j]){
			found = false;
			break;
		}}
		if(found){
			return k;
		}}
			runtime_error ex {"error: pattern not found!!"};
			cout<<ex.what();
}
int main (){
	string a= "GATTCA";
	string b = "ATT";
	cout<<find_first_dna_match(a,b);
	return 0;
}