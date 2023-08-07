    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            cin >> n;
            int a[n], b[n];
     
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                b[i] = a[i]; // Create a copy of array 'a' in 'b'
            }
     
            sort(b, b + n); // Sort array 'b' in non-decreasing order
     
            bool parity_preserved = true;
            for (int i = 0; i < n; i++) {
                // Check if the parity of elements is preserved after sorting
                if ((a[i] % 2) != (b[i] % 2)) {
                    parity_preserved = false;
                    break;
                }
            }
     
            if (parity_preserved) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
     
        return 0;
    }
