#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read the number of words
    int m;
    cin >> m;
    
    // Create the map to store word frequencies
    map<string, int> wordCount;
    
    // TODO: Write your code here
    for(int i=0; i<m; i++){
        string word;
        cin>>word;
        wordCount[word]++;
    }
    cin.ignore();
    string targetWord;
    cin >> targetWord;
    
    cout << "The word \"" << targetWord << "\" appears " << wordCount[targetWord] << " times" << endl;
    // Read n words and update their counts in the map
    // Then read the target word and output its frequency
    
    return 0;
}