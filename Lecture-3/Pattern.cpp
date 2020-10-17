// Pattern
#include <iostream>
using namespace std;

int main(){
	int n,i,no;
	cin>>n;

	int row = 1;
	while(row<=n){
		// 1. print spaces n-row times
		i = 1;
		while(i<=n-row){
			cout<<' ';// Printing space
			i = i+1;
		}

		// 2. print increasing numbers starting from row, do this task row times
		i = 1,no=row;
		while(i<=row){
			cout<<no;
			no = no+1;
			i = i +1;
		}
		
		// 3. print decresing numbers starting from 2*row-2, do this task (row-1)times
		i = 1,no=2*row-2;
		while(i<=row-1){
			cout<<no;
			no = no-1;
			i = i +1;
		}
		row = row+1;
		cout<<endl;
	}

	cout<<endl;
	return 0;
}