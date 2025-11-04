/*A string is called a palindrome if it remains the same when its characters are reversed.
Write a program (you may define necessary helper functions) to display the palindromes among
strings stored in an array, e.g.,
string words {“cat, “level”, “program”, “racecar”, “madam”, “bye”, “I”};
In this problem, you have to somehow manage the length of the string. One possibility is to take
another array of respective lengths.
int wordlengths {3, 5, 6, 7, 5, 3, 1};*/

# include<iostream>
# include<array>
#include <string>
using namespace std;
bool palindrome(string word, int length){
	for(int i=0; i<length/2; i++){
		if(word[i] != word[length-i-1]){
			return false;
		}
	}return true;
}
int main(){
	array<string,7> words={"cat", "level","program","racecar","madam","bye","I"};
	array<int , 7>wordlength={3,5,6,7,5,3,1};
	for(int i =0; i<7; i++){
		if(palindrome(words[i],wordlength[i])){
			cout<<words[i]<<endl;
		}
	}
	return 0;
}