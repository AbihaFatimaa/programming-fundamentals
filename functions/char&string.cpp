/*In main store the whole statement of task 01, 1 in a string variable. Make a function and call
in the declaration of above mentioned string variable to return the length (count of
characters) in the first sentence (ends at .) in the string. Output the length followed by
sequence of character to mimic as first sentence is displayed after its length. Later, to output
the sentence, make a function with several necessary parameters, obviously the first one is
the string that is containing the sentences. Demonstrate the working of this function.*/

# include <iostream>
# include <string>
using namespace std;
int sentencelength(const string&text)
{int count =0;
for(char ch:text){count++;              //(ch:text) This is a range-based for loop.for every ch in text it do what the next line says.
if(ch=='.') break;
} return count;
}
void display(const string&text, int length){
	cout<<"Length: "<<length<<endl;
	cout<<"sentence: ";
	int i=0;
	while(i<length){cout<<text[i];
	i++;
	cout<<endl;
	}
}
int main(){
	string text = "Write a function that returns the sum of digits of its only int type parameter.Write another function wrestlerInteger that returns true value if sum of digits of its first int type parameteris more than sum of digits of its second int type parameter.";
    
    int l= sentencelength(text);
    display(text, l);
    return 0;
}