// list
#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<int> l;

	l.push_back(10);
	l.push_back(2);
	l.push_back(1);
	l.push_back(5);
	l.push_back(4);

	// auto i = 10; // I will be an integer by default
	// auto x = 10.11; // x will be double be default

	for(auto it = l.begin() ; it != l.end() ; it++){
		cout<<*it<<"-->";
	}
	cout<<"NULL"<<endl;
	l.reverse();
	for(auto it = l.begin() ; it != l.end() ; it++){
		cout<<*it<<"-->";
	}
	cout<<"NULL";
	cout<<endl;

	l.sort();
	l.reverse();
	for(auto it = l.begin() ; it != l.end() ; it++){
		cout<<*it<<"-->";
	}
	cout<<"NULL";
	cout<<endl;
	return 0;
}