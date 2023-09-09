    /*
    use the formula: 1+(n-1)/5
    freqofn[i] is the number of elements such that their mod 5 value is i+1.
    */
    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    signed main(){
        ll n,m;  cin>>n>>m;
        vector<ll> freqofn(5 , 0);
        vector<ll> freqofm(5 , 0);
        for(int i=0;i<5;i++){
            if(n >= i+1){
                freqofn[i] = 1 + (n-(i+1))/5;
            }
            if(m >= i+1){
                freqofm[i] = 1 + (m-(i+1))/5;
            }
        }
    //now we have to check for n,m<5 pairs
    //1+4, 2+3, 3+2, 4+1, 0+0
        ll ans = freqofn[0]*freqofm[3] +  freqofn[1]*freqofm[2] + freqofn[2]*freqofm[1] + 
        freqofn[3]*freqofm[0] + freqofn[4]*freqofm[4];
        cout<<ans<<endl;
        return 0;
    }
