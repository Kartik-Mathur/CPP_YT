// BalancedParanthesis.cpp
#include <iostream>
#include <stack>
using namespace std;

int main(){

	stack<char> s;
	char a[]="((a+b)+c*d)";
	int n = sizeof(a);

	for(int i = 0 ;i < n ; i++){
		if(a[i] == '('){
			s.push('(');
		}
		else if(a[i] == ')'){
			if(!s.empty() && s.top() == '('){
				s.pop();
			}
			else{
				// cout<<"Not Balanced"<<endl;
				// return 0;
				break;
			}
		}
	}
	
	if(s.empty() == true){
		cout<<"Balanced Paranthesis"<<endl;
	}
	else{
		cout<<"Not Balanced"<<endl;
	}
	
	return 0;
}