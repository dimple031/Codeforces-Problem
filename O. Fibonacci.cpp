    #include <bits/stdc++.h>
     
    using namespace std;
/*
we use long long bcoz N is 50 but we are adding previous two value for each number due to which value become large 
For example: 50 - 7778742049
we use dp here : to memoize
Actually, There can be overlapping subintervals, that means let's say I have alreday executed the recursion call for fib(5). 
So if in future 5 again comes, then we will simply return its value instead of calling recursion for it again 
We will store the value for each recursion call in a vector and then we simply check if recursion has been already executed for that value,
then in that case we simply return its value (that we have previously stored).
*/
    long long fib(long long n, vector<long long> &dp) {
        if(n==1) return 0;
        else if(n==2) return 1;
        if(dp[n] != -1) return dp[n];
        else return dp[n] =  fib(n - 1, dp) + fib(n - 2, dp);
    }
     
    int main() {
        long long n;
        cin>>n;
        vector<long long> dp(n+1,-1); 
        cout<<fib(n, dp)<<endl;
        
        return 0;
    }
