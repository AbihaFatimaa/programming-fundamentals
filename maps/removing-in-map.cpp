#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read number of initial contacts
    int n;
    cin >> n;
    
    // Create the contacts map
    map<string, string> contacts;
    
    // Read initial contacts
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        contacts[name] = phone;
        // TODO: Add contact to the map
    }
    
    // Print initial directory
    cout << "Initial Contact Directory:" << endl;
    // TODO: Print all contacts using range-based for loop
    for(auto it:contacts){
        cout<<it.first<<": "<<it.second<<endl;
    }
    // Read number of contacts to remove
    int m;
    cin >> m;
    
    // Remove contacts
    for (int i = 0; i < m; i++) {
        string nameToRemove;
        cin >> nameToRemove;
        contacts.erase(nameToRemove);
        // TODO: Remove contact using .erase() method
    
    }
    
    // Print updated directory
    cout << "Updated Contact Directory:" << endl;
    if(contacts.empty()){
        cout<<"Directory is empty";
    }
    else{
    // TODO: Print remaining contacts or "Directory is empty" if empty
    for(auto it:contacts){
        cout<<it.first<<": "<<it.second<<endl;
    }}
    return 0;
}