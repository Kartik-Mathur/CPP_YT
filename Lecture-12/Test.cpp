#include <iostream>
#include <stack>
using namespace std;

int main(){
		
	stack<int> s; // This is how we create a stack
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}