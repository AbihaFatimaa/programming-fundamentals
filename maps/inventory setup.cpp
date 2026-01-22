#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // TODO: Write your code below
    map<string, int>inventory;
    cout<<"Initial Inventory Setup:"<<endl;
    inventory["apples"] = 50;
    inventory["bananas"] = 30;
    inventory["oranges"] = 25;
    inventory["grapes"] = 40;
    for(auto it:inventory){
    	cout<<it.first<<": "<<it.second<<endl;
	}
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string itemm; int m;
        cin>>itemm>>m;
        if(inventory.count(itemm)){
            if ((inventory[itemm] -= m)>=0){
                cout<<"Removed "<<m<<" "<<itemm<<". New total: "<<inventory[itemm]<<endl;
            }
            else{
                inventory[itemm] +=m;
                cout<<"Error: Cannot remove "<<m<<" "<<itemm<<". Only "<<inventory[itemm]<<" in stock"<<endl;
            }
        }
        else{
            cout<<"Error: "<<itemm<<" not found in inventory"<<endl;
        }
    }
    cout<<"Final Inventory:"<<endl;
    for(auto it:inventory){
        cout<<it.first<<": "<<it.second<<endl;
    }
    
    return 0;
	}