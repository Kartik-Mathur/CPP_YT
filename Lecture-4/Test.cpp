#include <iostream>
using namespace std;

int main(){
	
	int i = 1;

	while(i<=10){
		cout<<i<<' ';
		i = i + 1;
	}
	cout<<endl;
	int n;
	cin>>n;
	i = 0;
	for( ; i<=n ; ){
		cout<<i<<' ';


		i= i+1;
	}
	cout<<endl;
	return 0;
}