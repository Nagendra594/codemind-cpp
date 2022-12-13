#include<iostream>
using namespace std;
string PN(int x){
   int s=0;
    for (int i=1;i<x;i++){
        if (x%i==0){
            s+=i;
        }
    }
    if (s==x){
        return "True";
    }
    return "False";
}
int main(){
    int x;
    cin>>x;
    cout<<PN(x);
}