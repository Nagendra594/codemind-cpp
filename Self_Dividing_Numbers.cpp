#include<iostream>
using namespace std;
bool SD(int x){
    int ori,C,c,r;
    ori=x;
    C=0;
    c=0;
    while(x){
        r=x%10;
        if (r==0 || ori%r!=0){
            return false;
        }
        x/=10;
    }
    return true;
}
int main(){
        int x,y;
        cin>>x;
        cin>>y;
        for (int i=x;i<=y;i++){
            if (SD(i)){
                cout<<i<<' ';
            }
        }
}
        