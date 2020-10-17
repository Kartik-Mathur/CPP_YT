// PrintALlPrimes
#include <iostream>
using namespace std;

int main(){
	int i,no,N;
	cin>>N;

	no = 2;

	while(no<=N){

		// if no is prime it will print it
		i = 2;
		while(i<=no-1){
			if(no%i == 0){
				// Not a prime number
				// cout<<"Not a prime"<<endl;
				break; // this means i is not equals to n
				// return 0; I don't want to exit the program if I get to know no. is not a prime
			}

			i = i + 1;
		}

		if(i == no){
			cout<<no<<' ';
		}

		no = no + 1;

	}

	cout<<endl;
	return 0;
}