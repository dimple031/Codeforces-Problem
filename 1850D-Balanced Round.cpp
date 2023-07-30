    #include <iostream>
        #include <algorithm>
        using namespace std;
         
        int main()
        {
            int t;
            cin >> t;
         
            while (t--)
            {
                int n, k;
                cin >> n >> k;
                int a[n];
         
                for (int i = 0; i < n; i++)
                {
                    cin >> a[i];
                }
         
                // Sort the array in descending order
                sort(a, a + n);
         
                int count = 1,ans=1; 
                // Count of elements with absolute difference <= k
                //ans is used to keep track of the maximum count encountered so far.
                for (int i = 1; i < n; i++)
                {
                    if (abs(a[i] - a[i - 1]) <= k)
                    {
                        count++;          
                    }
                    else
                    {
                        count=1; // Stop counting if absolute difference > k
                        //If the absolute difference is greater than k, we reset the count variable to 1
                        //because we need to start counting again for the next pair of problems.
                    }
                    ans = max(ans, count); 
                    //In each iteration, we update the ans variable to keep track of the maximum count
                    //encountered so far. This will eventually give us the minimum number of problems
                    //that need to be removed to make the arrangement balanced.
                }
                
        //print the min. number of problems have to remove so that an arrangement of problems is balanced.
                cout << n-ans << endl;
            }
         
            return 0;
        }
