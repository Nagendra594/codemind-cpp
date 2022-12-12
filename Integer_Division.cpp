#include <iostream>
using namespace std;
int main(){
	long long x;
	cin>>x;
	if (x<-10 && x%10!=0){
		x/=10;
		cout<<x-1;
	}
	else if(-10<=x && x<=-1){
		cout<<-1;
	} 
		else{
		cout<<x/10;
	}
	
}