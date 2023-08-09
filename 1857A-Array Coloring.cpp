/*
  To achieve the same parity for both blue and red odd elements, the total number of odd elements in the array must be even.
  If it is not even, we won't be able to create two sets with the same parity. Hence, the answer is "YES" if the number of odd 
  elements in the array is even, and "NO" otherwise.
  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x%2!=0)cnt++;
        }
        if(cnt%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
/*
  method 2
    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int totalSum = 0, oddCount = 0, evenCount = 0;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                
            totalSum += a[i];
            if (a[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
            }
            if (totalSum % 2 == 0 && oddCount >= 1 && evenCount >= 1)
            cout<<"YES"<<endl;
            else if(totalSum % 2 == 0 && oddCount >= 1)
            cout<<"YES"<<endl;
            else if(totalSum % 2 == 0 && evenCount >= 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
        }
     
        return 0;
    }
*/
