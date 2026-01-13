#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the number of scores
    int n;
    cin >> n;
    
    // Create an empty vector for scores
    vector<int> scores;
    
    // TODO: Write your code below
    // 1. Print the initial size of the empty vector
    int count = scores.size();
    cout<<"Initial vector size: "<<count<<endl;
    // 2. Use a loop to read each score and add it to the vector
    for(int i=0; i<n; i++){
        int scorre;
        cin>>scorre;
        scores.push_back(scorre);
        cout<<"After adding score, size is: "<<scores.size()<<endl;
    }
    // 3. After adding each score, print the current size
    // 4. Print the final summary message
    cout<<"Total scores collected: "<<scores.size();
    
    return 0;
}