    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    int main() {
      int t;  cin >> t;
      while (t--) {
        ll n;  cin >> n;
        if (n & (n - 1)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
      }
    }

/*
You can also use the following condition to check:
n&(n−1)=0
. If the number — is a power of two, then it contains only one unit in the binary notation. Then (n−1) contains units in all positions except the one in which the unit in n is located. So their bitwise "AND" does not contain units.
  */
