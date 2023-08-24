        #include <bits/stdc++.h>
        using namespace std;
        int main()
        {
        	int n;
        	cin >> n;
        	vector<int> arr(n);
        	for (int i = 0; i < n; i++)
        		cin >> arr[i];
         
        	sort(arr.begin(), arr.end());
         
        	int ans = 0;
        	for (int i = 0; i < n; i++)
        		ans += (arr[n - 1] - arr[i]);
         
        	cout << ans << "\n";
        	return 0;
        }
        /*
            #include <bits/stdc++.h>
        using namespace std;
        int main()
        {
        	int n;
        	cin >> n;
        	vector<int> arr(n);
        	for (int i = 0; i < n; i++)
        		cin >> arr[i];
         
        	int max_element = arr[0];
        	for (int i = 1; i < n; i++)
        		max_element = max(max_element, arr[i]);
         
        	int ans = 0;
        	for (int i = 0; i < n; i++)
        		ans += (max_element - arr[i]);
         
        	cout << ans << "\n";
        	return 0;
        }
        */
