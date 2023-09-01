    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main() {
        int t; cin>>t;
        while(t--){
            ll n; cin>>n;
     
            ll a1 = 0 , a2 = 0;
            while(n%2 == 0)
            {
                a1++;
                n/=2;
            }
            while(n%3 == 0)
            {
                a2++;
                n/=3;
            }
     
            if(n == 1)
            {
                if(a1 <= a2)
                {
                    ll ans = min(a1,a2);
                    a1-=ans;
                    a2-=ans;
                    ans += a2*2;
                    cout<<ans<<"\n";
                }   
                else{
                    cout<<"-1\n";
                }
            }
            else
                cout<<"-1\n";
        }
        return 0;
    }
