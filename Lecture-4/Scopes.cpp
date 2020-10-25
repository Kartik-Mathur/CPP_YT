// Scopes
#include <iostream>
using namespace std;

int z = 10; // Global scope

int main(){
	cout<<z<<endl; // 10
	int z = 1;
	cout<<z<<endl; // 1
	// if I want to use the global space bucket that I have created, even
	// though we have that bucket locally
	cout<<::z<<endl; // This will only print the bucket z inside global space
// :: - Scope Resolution Operator
	::z = ::z - 10;
	cout<<::z<<endl;



	// int x=-1;
	// int y = 10;
	// cout<<x<<endl; // 1

	// if(x>0){
		
	// 	cout<<"Hello We are learning scopes-"<<y<<" & "<<x<<endl;
	// }
	// else{
	// 	cout<<"Hello we are inside else-"<<x<<" & "<<y<<endl;
	// }

	// cout<<endl;
	return 0;
}