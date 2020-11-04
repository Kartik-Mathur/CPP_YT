#include <iostream>
using namespace std;

int main(){
	int init,fval,step;
	cin>>init>>fval>>step;

	for(int farehn = init ; farehn <= fval ; farehn = farehn+step){
		int c = 5*(farehn-32)/9;
		cout<<farehn<<' '<<c<<endl;
	}


	cout<<endl;
	return 0;
}