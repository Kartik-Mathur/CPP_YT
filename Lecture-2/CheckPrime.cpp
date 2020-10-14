// CheckPrime
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; // n -> to check prime or not

	int i = 2;
	while(i<=n-1){

		if(n%i == 0){
			// This means that n is getting divided by i, thus n is not a prime number
			cout<<"Not a Prime Number"<<endl;
			return 0; // exit
		}

		i = i + 1;
	}

	cout<<"Prime Number";
	cout<<endl;
	return 0;
}