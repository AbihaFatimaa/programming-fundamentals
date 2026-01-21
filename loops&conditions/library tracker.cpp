//library book management.
# include <iostream>
# include <string>
using namespace std;
struct books{
	string title, author, availability;
};
int main(){
	books b1, b2, b3, b4, b5;
	b1.author = "Paula hawkins";
	b1.title = "the girl on the train";
	b1.availability = "yes";
	
	b2.author = "kanae minato";
	b2.title = "confessions";
	b2.availability = "yes";
	
	b3.author = "markus zusak";
	b3.title = "the book thief";
	b3.availability = "yes";
	
	b4.author = "noelle w.ihli";
	b4.title = "room for rent";
	b4.availability = "yes";
	
	b5.author = "alex michaelides";
	b5.title = "the silent patient";
	b5.availability = "yes";
	
	cout<<"Available books: "<<endl;
	cout<<b1.title<<endl;
	cout<<b2.title<<endl<<b3.title<<endl<<b4.title<<endl<<b5.title<<endl;
	while (true){
		string status;
		cout<<"enter check out or return"<<endl;
		cin>>status;
		cin.ignore();
		if(status == "check-out"){
			int n;
			cout<<"enter the no. of books: "<<endl;
			cin>>n;
			if(n>3){
				cout<<"can only checkout 3 books";
				cin>>n;
			}
			cin.ignore();
			int a;
			for(int i=1; i<n; i++){
			cout<<"enter the index of books: ";
			cin>>a;}
			cout<<"enter today date: ";
			int date;
			cin>>date;
			date = date+7;
			cout<<"due date to return is: "<<date<<endl;
		}
		else if (status == "return"){
			int duedate, date;
			cout<<"enter the due date: ";
			cin>>duedate;
			cin.ignore();
			cout<<"enter today's date: ";
			cin>>date;
			cin.ignore();
			double fine;
			if(duedate<date){
				fine = (date-duedate)*0.50;
			cout<<"your fine is: "<<fine<<"$"<<endl;
			}
			
		}
		else if(status == "exit"){
			break;
		}
		else{
			cout<<"incorrect input!!!";
		}
	}
	 return 0;
}