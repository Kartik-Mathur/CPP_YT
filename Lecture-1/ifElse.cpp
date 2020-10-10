#include <iostream>
using namespace std;

int main(){
	
	int a;
	cin>>a;

	// if(a>0){
	// 	cout<<"Hello"<<endl;
	// }
	// else{
	// 	cout<<"World"<<endl;
	// }

	if(a>0 && a<10){
		cout<<"Hello"<<endl;
	}
	else if(a>=10 && a<20){
		cout<<"Harry Potter"<<endl;
	}
	else if(a>=20 && a<30){
		cout<<"Ron"<<endl;
	}
	else{
		cout<<"Random! Try Again"<<endl;
	}

	return 0;
}