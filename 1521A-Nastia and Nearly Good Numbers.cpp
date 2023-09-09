    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    int main()
    {
        ll t;  cin>>t;
        while(t--){
            ll a,b;
            cin>>a>>b;
            if(b==1){
            cout<<"NO"<<endl;
            }else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a+a*b<<endl;
            }
        }
     
        return 0;
    }
