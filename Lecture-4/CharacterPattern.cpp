// CharacterPattern
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	for(int row = 1; row <= n ; row = row + 1){
		char ch = 'A';
		for(int col  = 1; col <= row ; col = col +1){
			cout<<ch<<' ';
			ch = ch + 1;
		}

		cout<<endl;
	}

	char c = 'Z'+1;
	cout<<c<<endl;



	cout<<endl;
	return 0;
}