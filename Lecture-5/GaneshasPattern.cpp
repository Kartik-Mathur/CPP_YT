// GaneshasPattern
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	// Work for first row
	// 1. Print '*'
	cout<<'*';
	// 2. Space
	for(int space = 1; space<=n-2;space = space + 1){
		cout<<' ';
	}
	// 3. N stars
	for(int stars = 1; stars<=n;stars++){
		cout<<'*';
	}
	cout<<endl;
	// 2nd task
	for(int row = 1; row<=n-2; row++){
		cout<<'*';
		for(int space = 1; space<=n-2;space++){
			cout<<' ';
		}
		cout<<'*';
		cout<<endl;
	}

	for(int stars = 1; stars<=2*n-1;stars++){
		cout<<'*';
	}
	cout<<endl;


	// Lower Part
	for(int row = 1; row<=n-2; row=row+1){
		for(int space = 1; space<=n-1;space++){
			cout<<' ';
		}
		cout<<'*';
		for(int space = 1; space<=n-2;space = space + 1){
			cout<<' ';
		}
		cout<<'*';
		cout<<endl;
	}

	// Last Row
	for(int star = 1; star <= n ; star= star+1){
		cout<<'*';
	}
	for(int space = 1; space<=n-2;space = space + 1){
			cout<<' ';
	}
	cout<<'*';
	cout<<endl;
	return 0;
}