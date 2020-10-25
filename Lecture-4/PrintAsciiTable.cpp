// PrintAsciiTable
#include <iostream>
using namespace std;

int main(){
	
	
	for(int c = 65; c<=100 ; c = c+1){
		char ch = c;
		cout<<c<<" : "<<ch<<endl;
	}

	cout<<endl;
	return 0; // Status Code: 0-successfull execution
}