/* This algorithm is used to check prime number between any given number or 
range 
In this algo first we create a boolean vector or array of n+1 size and mark all
as prime number i.e true ,then marks 0 and 1 as false bcz these are not prime
numbers 
then start from 2 and mark all the elements false which lies in the table of 2
or multiple of 2 .
then we move to the next unmarked number i.e 3 (bcz 3 doesn't comes in the 
table of 2) and marks all element false which are multiple of 3 .
Again we select next unmarked number and process goes up until we reach
less than n or equal to n.

*/
// Implementation 

#include<bits/stdc++.h>
using namespace std;

vector<int> seive(int n){
    vector<bool> prime(n+1,true); // bool vector of n+1 size and assume all as prime.
    prime[0]=prime[1]=false;//marks 0 and 1 false bcz these are not prime numbers

    for(int i=2;i<=n;i++){
        if(prime[i]){//If i is unmarked(true) then go for its multiple to mark 0.
            for(int j=2*i;j<=n;j+=i){
                prime[j]=0;// mark all element 0(false) which are multiple of i.
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
   
}

int main(){
    cout<<"Enter element to find prime number smaller or equal than that element :"<<endl;
    int n;
    cin>>n;

    seive(n);
    return 0;
}