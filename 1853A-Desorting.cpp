    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            int gap=1e9;
            //the line int diff = 1e9; is essential for initializing diff with a
            //large value and ensuring that it can be correctly updated to find 
            //the minimum difference between adjacent elements in the array.
            //This contributes to the correct functioning of the code and helps pass the test cases.
            bool sort = true;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if (i > 0) {
                    gap = min(a[i] - a[i - 1], gap);
                    sort = sort && a[i] >= a[i - 1];
                }
            }
            
            if (!sort) {
                cout << 0 << endl;
                continue;
            }
        
            cout << gap/2 + 1 << endl;
        }
        return 0;
    }
