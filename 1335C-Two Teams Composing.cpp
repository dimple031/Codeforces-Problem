#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
/*
The line ++cnt[x]; is an increment operation that increases the value of the cnt vector at the index x by 1.
For example, if you have a student with skill 3, ++cnt[3]; increases the count of students with skill 3 by 1 in the cnt vector.
*/
			++cnt[x];    
		}
		int mx = *max_element(cnt.begin(), cnt.end());
/*
" * " is called the "value of" operator
index is a position(with respect to the first array element) in which the array/vector element is stored 
pointer refers to the location where that element is stored in computer memory
we can solve this *max_element without using any pointer by using just run a loop from 0 to n-1
and find the max value
Time Complexity of both the methods is O(N), easier in the sense we have to write less code
*/
		int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
		cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
	}

    return 0;
}
