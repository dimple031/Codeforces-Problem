#include <bits/stdc++.h>
#define ll long long
using namespace std;
signed main() {
    int t;  cin>>t;
    while(t--){
    ll n;  cin>>n;
    cout<<2<<" "<<n-1<<endl;
    }
    return 0;
}
/*
we know that every prime number is an odd number so if prime number diveded by 2 always give remainder 1, and so we can always take a=2 for every case and now we just have to 
find b so that it also gives remainder 1 which is easily get by (n-1) because n%n==0 and n%(n-1)==1. Thus, a=2 and b=n-1.
*/
