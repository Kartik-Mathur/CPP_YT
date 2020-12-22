// Vectors.cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v;

	v.push_back(10);
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
	v.push_back(4);

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	sort(v.begin(),v.end());
	for(int i = 0 ; i<v.size() ; i++){
		cout<<v[i]<<' ';
	}
	cout<<endl;
	return 0;
}