#include<bits/stdc++.h>
using namespace std;

vector<long long > prime;

void seive(long long n ){
    vector<int> isprime(n+1,true);
    vector <int> ans; 
    isprime[0]=isprime[1]=false;

    for(int i=2;i<=n;i++){
        if(isprime[i]){
            prime.push_back(i);
            for(int j=2*i;j<=n;j+=i){
                isprime[j]=0;
            }
        }
    }
    
}

void segSeive(int l,int h){
    long long sq =sqrt(h);
    seive(sq);
    vector<bool> isprime(h-l+1,true);
    for(long long p : prime){
        long long sm=(l/p)*p;
        if(sm<l)
        sm+=p;
        for(long long m=sm;m<=h;m+=p){
            isprime[m-l]=false;
        }
    }

    for(long long i=l;i<=h;i++){
        if(isprime[i-l]){
            cout<<i<<" ";
        }
    }
}

int main(){

}