# include<iostream>
# include<string>
using namespace std;
enum trafficlight{Red=0, yellow=1, green=2,};
typedef unsigned int unit;
typedef struct{
	string name;
	int marks;
}student;
struct students{
	string name;
	int marks;
	int roll;
};
int main(){
/*	int input;
	cout<<"Enter the traffic light color(0,1,2): ";
	cin >> input;
	if(input == Red){
		cout<<"stop";
	}
	else if(input == yellow){
		cout<<"get ready";
	}
	else if(input == green){
		cout<<"go";
	}
	else{cout<<"invalid input";
	}
	cout<<endl;
	student s1;
	cin>> s1.name>> s1.marks;
	cout<<endl;
	student s2;
	cin>>s2.name>>s2.marks;
	cout<<endl;
	cout<<s1.name<<endl<<s1.marks;*/
students s1;
cout<<"enter name:";
cin>>s1.name;
cout<<"enter marks:";
cin>>s1.marks;
cout<<"enter roll:";
cin>>s1.roll;
students s2;
cout<<"enter name:";
cin>>s2.name;
cout<<"enter marks:";
cin>>s2.marks;
cout<<"enter roll:";
cin>>s2.roll;
students s3;
cout<<"enter name:";
cin>>s3.name;
cout<<"enter marks:";
cin>>s3.marks;
cout<<"enter roll:";
cin>>s3.roll;
cout<<s1.name<<s1.marks<<s1.roll<<endl;
cout<<s2.name<<s2.marks<<s2.roll<<endl;
cout<<s3.name<<s3.marks<<s3.roll<<endl;
if(s1.marks>s2.marks && s1.marks>s3.marks){
	cout<<"highest marks are of s1";
}
if(s2.marks>s1.marks && s2.marks>s3.marks){
	cout<<"highest marks are of s2";
}
if(s3.marks>s2.marks && s3.marks>s1.marks){
	cout<<"highest marks are of s3";
}

	return 0;
}