#include<bits/stdc++.h>
using namespace std;
int Number_of_SetBits(int a,int b){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    while(b!=0){
        if(b&1){
            count++;
        }
        b>>=1;
    }
    return count;
}
int main(){
	int a,b;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
    int ans=Number_of_SetBits(a,b);
    cout<<ans<<"\n";
    return 0;
}