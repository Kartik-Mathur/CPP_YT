// UniqueNumber-1
#include <iostream>
using namespace std;

int main(){
	
	int n,no;
	cin>>n; // n will be odd, and every number will occur twice,
		// except for one number
	int ans = 0; // Because 0 xor with no is no

	for(int i = 0 ; i < n ; i ++){
		cin>>no;
		ans = ans^no;
	}

	cout<<"Unique Number is "<<ans<<endl;




	cout<<endl;
	return 0;
}