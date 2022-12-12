#include <iostream>
using namespace std;
int AD(int x){
	int r;
	int s=0;
	while(x){
		r=x%10;
		s+=r;
		x/=10;
	}
	if (s<10){
		return s;
	}
	return AD(s);
}
int main(){
	int x;
	cin>>x;
	cout<<AD(x);
}
