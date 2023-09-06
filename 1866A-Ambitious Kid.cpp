    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int n;  cin >> n;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
     
        int minAbsolute = abs(a[0]); // Initialize minAbsolute with the absolute value of the first element
     
        for (int i = 1; i < n; ++i) {
            // Update minAbsolute if the absolute value of the current element is smaller
            minAbsolute = min(minAbsolute, abs(a[i]));
        }
     
        cout << minAbsolute << endl;
     
        return 0;
    }
