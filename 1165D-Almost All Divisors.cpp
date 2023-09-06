#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;  cin>>t;
    while(t--){
    ll n;  cin>>n;
    vector<ll> a(n); //take an array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());    //sort the array to find max and min element of array bcoz product of these two gives x and we can able to check the divisors for next section
    ll x= a[0] * a[n-1];
    
    vector<ll> arr;           //input another array to store all the divisors excepte 1 and x that's why we take i=2
    for(int i=2;i<=sqrt(x);i++){   //run a loop to find all the divisors
        if(x%i==0){                
            arr.push_back(i);      //push the element into new array
            if(i != x/i)
            arr.push_back(x/i);   
        }
    }
    sort(arr.begin(),arr.end());   
    if (arr == a) {                
			cout << x << endl;
		} else {
			cout << -1 << endl;
		}
    }
    return 0;
}
