#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int number = 1;

	int row = 1,col;

	while(row<=n){

		col = 1;
		while(col<=row){
			// task
			cout<<number;
			number = number + 1;
			col = col + 1;
		}
		// go to next line
		cout<<'\n';
		row = row + 1;
	}

	cout<<endl;
	return 0;
}