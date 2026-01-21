#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Read the number of menu items
    int n;
    cin >> n;
    
    // Create the menu map
    map<string, double> menu;
    
    // Read menu items and prices
    for (int i = 0; i < n; i++) {
        string dish;
        double price;
        cin >> dish >> price;
        // TODO: Add the dish and price to the menu map
        menu[dish] = price;
    }
    
    // TODO: Print "Restaurant Menu:" header
    cout<<"Restaurant Menu:"<<endl;
    // TODO: Use range-based for loop to iterate through menu and print each item
    // Format: [dish]: $[price] with 2 decimal places
    for(auto it:menu){
        cout<<it.first<<": $"<<fixed<<setprecision(2)<<it.second<<endl;
    }
    // TODO: Print total number of menu items
    cout<<"Total menu items: "<<menu.size()<<endl;
    return 0;
}