#include <bits/stdc++.h>
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
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++)
            cin>>num[i];
        if(n%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(num[i]%2 == 0) even++;
            else odd++;
        }
        int rem = max(even,odd);
        int ans = rem-(n/2);
        cout<<ans<<endl;
    }
    return 0;
}
/* method 2
      #include <bits/stdc++.h>
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
            cin>>n;
            vector<int> num(n);
            int even=0,odd=0;
            for(int i=0;i<n;i++){
                cin>>num[i];
                
                if(num[i]%2 == 0) even++;
                else odd++;
            }
            if(even == odd) cout<<0<<endl;
            else if(n%2 != 0)  cout<<-1<<endl;
            else cout<<abs(even-odd)/2<<endl;
        
        }
        
        return 0;
    }
*/
