#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;

    cout << "Welcome to Task List Tool!" << endl << endl;
    cout << "Menu Options:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Remove Task" << endl;
    cout<<"4. Quit" <<endl<< endl;

    cout << "Task list system initialized and ready!" << endl;
int choice;
while (true){
    cout<<"Choose an option: ";
    cin>>choice;
    cin.ignore();
    if(choice == 1){
        string task;
        getline(cin, task);
        tasks.push_back(task);
        cout<<"Task \""<< task <<"\" added successfully!"<<endl;
        cout<<"Total tasks: "<<tasks.size()<<endl;
    }
    else if (choice == 2){
        if(tasks.empty()){
            cout<<"No tasks available."<<endl;
        }
        else{
            cout<<"Your Tasks:"<<endl;
            for(int i=0; i<tasks.size(); i++){
                cout<<i+1<<". "<<tasks[i]<<endl;
            }
            cout<<"Total tasks: "<<tasks.size()<<endl;
        }
    }
    else if(choice == 3){
        int taskno;
        cin>>taskno;
        if(taskno < 1 || taskno > tasks.size()) {
        cout << "Error: Invalid task number. Please enter a number between 1 and "
             << tasks.size() << "." << endl;
    } 
    else {
        string removetask = tasks[taskno - 1];
        tasks.erase(tasks.begin() + (taskno - 1));
        cout << "Task \"" << removetask << "\" removed successfully!" << endl;
        if(tasks.empty()){
            cout<<"No tasks remaining."<<endl;
        }
        else{
            cout << "Remaining Tasks:" << endl;
        for(int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
        }
        cout<<"Total tasks: "<<tasks.size()<<endl;
    }}
    else if(choice == 4){
        cout<<"Thank you for using Task List Tool!"<<endl;
        break;
    }
    else{
        cout<<"Invalid choice. Please try again."<<endl;
    }
}
    
    return 0;
}
