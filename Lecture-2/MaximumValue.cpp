// MaximumValue
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int no;
	cin>>no;

	int maximum = no;
	int i = 1;
	while(i<=n-1){
		cin>>no;
		if(no>maximum){
			maximum = no;
		}

		i = i+1;
	}
	cout<<maximum;

	cout<<endl;
	return 0;
}