    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
            ll n; cin >> n;
            vector<ll> powOf9(12);
         
            powOf9[0] = 1;
            for (int i = 1;i < 12;i++)
                powOf9[i] = powOf9[i - 1] * 9;
         
            string s = to_string(n);
            ll len = s.size(), ans = 0;
            ll prefixProduct = 1;
            for (int i = 0;i < len;i++)
            {
                int digit = s[i] - '0';   //convert string to int
                int remDigits = len - i - 1;
                if (digit > 1)
                {
                    ll product = prefixProduct * (digit - 1) * (powOf9[remDigits]);
                    ans = max(ans, product);
                }
                else if (i == 0 && digit == 1)
                {
                    ll product = (powOf9[remDigits]);
                    ans = max(ans, product);
                }
                prefixProduct = prefixProduct * (digit);    
            }
            ans = max(ans, prefixProduct);
            cout << ans << "\n";
            return 0;
        }
