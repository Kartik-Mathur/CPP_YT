#include <iostream>
using namespace std;


int main(){
	
	int n;
	cin>>n;

	// Increasing start pattern
	for(int row = 1; row<=n ; row = row + 1){
		// 1. To print spaces
		for(int space = 1; space<=n-row ; space = space + 1){
			cout<<' ';
		}
		// 2. To print stars
		for(int stars = 1 ; stars<=2*row-1 ; stars = stars + 1){
			cout<<'*';
		}
		cout<<endl;
	}

	// Decreasing Pattern
	for(int row = 1 ; row <= n-1 ; row = row+1){
		for(int space = 1 ; space<=row ; space = space + 1){
			cout<<' ';
		}
		for(int stars = 1 ; stars<=2*(n-row)-1 ; stars = stars + 1){
			cout<<'*';
		}
		cout<<endl;
	}

	return 0;
}