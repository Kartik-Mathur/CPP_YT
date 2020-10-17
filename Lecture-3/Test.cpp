#include <iostream>
using namespace std;

int main () {

	char c = 66;
	cout<<c<<endl;

	char ch;
	cout<<'A'+1<<endl;
	cout<<'B'+1<<endl;
	cout<<'A'+'A'<<endl;
	cin>>ch;
	// 1st way
	int a = ch;
	if(a>=65 && a<=90){
		cout<<"Uppecase"<<endl;
	}
	else if(a>=97 && a<=122){
		cout<<"Lowercase"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}

	// 2nd way
	if(ch>='A' && ch<='Z'){
		cout<<"UpperCase"<<endl;
	}
	else if(ch>='a' && ch<='z'){
		cout<<"Lowercase"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}

