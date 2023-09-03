    #include <iostream>
    using namespace std;
    #define ll long long
    int main() {
        int t;  cin >> t;
         
        while (t--) {
            ll n, k;
            cin>>n>>k;
         
    // Calculate the sum of the first k odd integers (k^2)
            ll sum_of_k_odd_integers = k * k;
         
    // Check if n can be represented as a sum of k distinct positive odd integers
            if (sum_of_k_odd_integers > n || (n % 2 != k % 2)) {
                cout<< "NO" <<endl;
            } else {
                cout<< "YES" <<endl;
            }
        }
         
        return 0;
    }
