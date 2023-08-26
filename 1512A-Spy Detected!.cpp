#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        int idxOfFirstNo = 0, idxOfSecondNo = -1;
		int countFirstNo = 1, countSecondNo = 0;
		for(int i=1;i<n;i++){
		    if(num[i] == num[idxOfFirstNo]){
		    countFirstNo++;
		    }else{
		    idxOfSecondNo=i;
		    countSecondNo++;
		    }
		}    
		 if(countFirstNo == 1)   
		 cout<<idxOfFirstNo+1<<endl;
		 else
		 cout<<idxOfSecondNo+1<<endl;
    }
    return 0;
}

// method 2
//     #include <bits/stdc++.h>
//     using namespace std;
//     int main()
//     {
//     	int t;
//     	cin >> t;
//     	while (t--)
//     	{
//     		int n;
//     		cin >> n;
//     		vector<int> arr(n);
//     		for (int i = 0; i < n; i++)
//     			cin >> arr[i];
     
//     		vector<int> freq(101, 0);  time complexity depends on constraint or problem
//     		vector<int> lastIdx(101, -1);
     
//     		for (int i = 0; i < n; i++)
//     		{
//     			freq[arr[i]]++;
//     			lastIdx[arr[i]] = i;
//     		}
//     		for (int i = 1; i <= 100; i++)
//     		{
//     			if (freq[i] == 1)
//     				cout << lastIdx[i] + 1 << "\n";
//     		}
//     	}
//     	return 0;
//     }
