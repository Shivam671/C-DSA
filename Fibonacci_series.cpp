#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num){
    int a=0,b=1,next;
    cout<<a<<" "<<b<<" ";
    for (int i=2;i<num;i++){
        if(i==num){
            return next;
        }
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fibonacci( n);
    //cout<<"Fibonacci series of"<<n<<"is "<<ans<<"\n";
}